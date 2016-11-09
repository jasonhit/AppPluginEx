#pragma once

#include <qobject.h>

class DlgModel : public QObject
{
private:
	Q_OBJECT

public:
	DlgModel();
	~DlgModel();
};
