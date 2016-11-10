#include "dlgplugin.h"

#include <QtQml/qqml.h>

#include "DlgModel.h"


DlgPlugin::DlgPlugin(QObject *parent) :
	QGenericPlugin(parent)
{
}

DlgPlugin::DlgPlugin() :
	DlgPlugin(nullptr)
{
}

void DlgPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(uri == QLatin1String("Unknown value here.")); // TODO: What value is this?
	qmlRegisterType<DlgModel>(uri, 1, 0, "DlgData"); // TODO: Is this correct?
}

QObject* DlgPlugin::create(const QString& name, const QString &spec) // TODO: Implement or not to implement?
{
	Q_ASSERT(false); // TODO: Remove.
	QObject* result = nullptr;
	if (!name.compare(QLatin1String("dlgplugin"), Qt::CaseInsensitive))
	{
		// result = new ExampleDlg(key, spec);
	}
	return result;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(AppPluginEx, DlgPlugin)
#endif // QT_VERSION < 0x050000
