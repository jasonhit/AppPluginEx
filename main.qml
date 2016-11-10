import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.5

// Source: http://doc.qt.io/qt-5/qtqml-cppintegration-interactqmlfromcpp.html#connecting-to-qml-signals
Window {
    id: window1
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(string msg)

    Text {
        id: text1
        text: qsTr("Update QML using JavaScript from QML")
        anchors.centerIn: parent
    }

    Text {
        id: text2
        text: qsTr("Update QML using Signal & Slot from CPP")
        anchors.top: text1.bottom
        anchors.topMargin: 25
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Button {
        id: button1
        anchors.top: text2.bottom
        anchors.topMargin: 25
        anchors.horizontalCenter: parent.horizontalCenter
        text: qsTr("Button")

    }

    Connections {
        target: button1
        onClicked: {
            updateThisTextFromQML();
        }
    }

    function updateThisTextFromQML() {
        text1.text = 'Hello From QML'
    }


}
