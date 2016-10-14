#pragma once
#include "DataServerBase.h"
class SystemPresetServerChild1:
	public DataServerBase
{
public:
	SystemPresetServerChild1();
	~SystemPresetServerChild1();

	virtual bool loadData();
	virtual bool saveData();
};

