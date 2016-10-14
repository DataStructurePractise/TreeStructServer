#pragma once
#include "DataServerBase.h"
#include "SystemPresetServerChild1.h"

class SystemPresetServer :
	public DataServerBase
{
public:
	SystemPresetServer();
	virtual ~SystemPresetServer();

	virtual bool loadData();
	virtual bool saveData();

private:
	SystemPresetServerChild1* m_child1;
	SystemPresetServerChild1 * m_child2;

};

