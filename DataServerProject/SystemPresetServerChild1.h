#pragma once
#include "DataServerBase.h"
#include <string>

class SystemPresetServerChild1:
	public DataServerBase
{
public:
	SystemPresetServerChild1();
	SystemPresetServerChild1(std::string description);
	~SystemPresetServerChild1();

	virtual bool loadData();
	virtual bool saveData();
};

