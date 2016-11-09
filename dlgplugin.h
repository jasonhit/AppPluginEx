#ifndef DLGPLUGIN_H
#define DLGPLUGIN_H

#include <QGenericPlugin>

class DlgPlugin : public QGenericPlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QGenericPluginFactoryInterface" FILE "AppPluginEx.json")
#endif // QT_VERSION >= 0x050000

public:
    DlgPlugin(QObject *parent = 0);

private:
	virtual void registerTypes(const char *uri);
	virtual QObject* create(const QString& name, const QString &spec);
};

#endif // DLGPLUGIN_H
