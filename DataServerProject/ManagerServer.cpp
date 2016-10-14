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
	//����Ϊ��ObjectTree��ʵ�ֵķ���
	//systemServer->loadSelfAndTreeData();
	//paramServer->loadSelfAndTreeData();

	//����Ϊ��DataPresetServer��ʵ�ֵķ���
	dynamic_cast<DataServerBase*>(systemServer)->loadTreeData();
	static_cast<DataServerBase*>(paramServer)->saveTreeData();
	return false;
}

bool ManagerServer::saveServerData()
{
	//����Ϊ��ObjectTree��ʵ�ֵķ���
	//systemServer->saveSelfAndTreeData();
	//paramServer->saveSelfAndTreeData();

	//����Ϊ��DataPresetServer��ʵ�ֵķ���
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