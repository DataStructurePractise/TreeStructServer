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
	//以下为在ObjectTree中实现的方法
	//systemServer->loadSelfAndTreeData();
	//paramServer->loadSelfAndTreeData();

	//以下为在DataPresetServer中实现的方法
	dynamic_cast<DataServerBase*>(systemServer)->loadTreeData();
	static_cast<DataServerBase*>(paramServer)->saveTreeData();
	return false;
}

bool ManagerServer::saveServerData()
{
	//以下为在ObjectTree中实现的方法
	//systemServer->saveSelfAndTreeData();
	//paramServer->saveSelfAndTreeData();

	//以下为在DataPresetServer中实现的方法
	static_cast<DataServerBase*>(systemServer)->saveTreeData();
	static_cast<DataServerBase*>(paramServer)->saveTreeData();
	return false;
}

void main_other_bak()
{
	ManagerServer ms;
	ms.loadServerData();
	ms.saveServerData();
}