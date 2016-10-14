#include "SystemPresetServerChild1.h"


SystemPresetServerChild1::SystemPresetServerChild1()
{
	setDescription("SystemPresetServerChild1");
}


SystemPresetServerChild1::~SystemPresetServerChild1()
{
}

bool SystemPresetServerChild1::loadData()
{
	printf("%s server load data.\n", getDescription().c_str());
	return false;
}

bool SystemPresetServerChild1::saveData()
{
	printf("%s server save data.\n", getDescription().c_str());
	return false;
}
