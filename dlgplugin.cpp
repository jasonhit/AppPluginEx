#include "dlgplugin.h"

#include <QtQml/qqml.h>

#include "DlgModel.h"


DlgPlugin::DlgPlugin(QObject *parent) :
    QGenericPlugin(parent)
{
}

void DlgPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(uri == QLatin1String("Unknown value here."));
	qmlRegisterType<DlgModel>(uri, 1, 0, "DlgData");
}

QObject* DlgPlugin::create(const QString& key, const QString &spec)
{
	QObject* result = nullptr;
	if (!key.compare(QLatin1String("dlgplugin"), Qt::CaseInsensitive))
	{
		// result = new ExampleDlg(key, spec);
	}
	return result;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(AppPluginEx, DlgPlugin)
#endif // QT_VERSION < 0x050000
