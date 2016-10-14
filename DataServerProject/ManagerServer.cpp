#include "ManagerServer.h"
#include "SystemPresetServer.h"
#include "ParamPresetServer.h"


ManagerServer::ManagerServer()
{
	systemServer = new SystemPresetServer();
	paramServer = new ParamPresetServer();
}


ManagerServer::~ManagerServer()
{
	delete(systemServer);
	delete(paramServer);
}

bool ManagerServer::loadServerData()
{
	systemServer->loadSelfAndTreeData();
	paramServer->loadSelfAndTreeData();
	return false;
}

bool ManagerServer::saveServerData()
{
	systemServer->saveSelfAndTreeData();
	paramServer->saveSelfAndTreeData();
	return false;
}

void main()
{
	ManagerServer ms;
	ms.loadServerData();
	ms.saveServerData();
}