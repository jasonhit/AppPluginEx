#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QPluginLoader>

#include "../IDlgPluginTest.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

	QQmlApplicationEngine engine;
	engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

	const auto fileName = "C:\\Qt\\Qt5.6.1\\5.6\\msvc2015_64\\plugins\\generic\\AppPluginEx.dll"; // TODO: Find a better way to access this.
	QPluginLoader pluginLoader(fileName);
	const auto plugin = pluginLoader.instance();
	if (plugin != nullptr)
	{
		const auto dlgPluginTest = qobject_cast<IDlgPluginTest*>(plugin);
		if (dlgPluginTest != nullptr)
		{
			Q_ASSERT(dlgPluginTest != nullptr);
			// TODO: Is there something to do that will load the AppPluginEx?
		}
	}

	const auto result = app.exec();

	pluginLoader.unload();

	return result;
}
