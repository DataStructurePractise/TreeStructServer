#include "SystemPresetServer.h"
#include "SystemPresetServerChild1.h"


SystemPresetServer::SystemPresetServer()
{
	setDescription("SystemPreset");
	m_child1 = new SystemPresetServerChild1();
	addChild(m_child1);
	m_child2 = new SystemPresetServerChild1();
	addChild(m_child2);
}


SystemPresetServer::~SystemPresetServer()
{
	delete(m_child1);
	delete(m_child2);
}

bool SystemPresetServer::loadData()
{
	printf("%s server load data.\n", getDescription().c_str());
	return false;
}

bool SystemPresetServer::saveData()
{
	printf("%s server save data.\n", getDescription().c_str());
	return false;
}
