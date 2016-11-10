#pragma once

#include <QObject>

class IDlgPluginTest : public QObject
{
	Q_OBJECT

public:
	explicit IDlgPluginTest(QObject* const parent);
	virtual ~IDlgPluginTest();
};

QT_BEGIN_NAMESPACE

#define IDlgPluginTest_iid "com.ecd.AppPluginEx.IDlgPluginTest"

Q_DECLARE_INTERFACE(IDlgPluginTest, IDlgPluginTest_iid)

QT_END_NAMESPACE
