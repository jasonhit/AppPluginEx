#include "dlgplugin.h"


DlgPlugin::DlgPlugin(QObject *parent) :
    QGenericPlugin(parent)
{
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(AppPluginEx, DlgPlugin)
#endif // QT_VERSION < 0x050000
