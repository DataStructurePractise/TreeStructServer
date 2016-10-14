//使用继承DataServerBase的方法时用这个类管理子服务器

#include "ServerFactory.h"
#include <iterator>


ServerFactory::ServerFactory()
{
	setDescription("ServerFactory");
	paramPresetServer = new ParamPresetServer();
	systemPresetServer = new SystemPresetServer();
	//m_lstserverList.push_back(paramPresetServer);
	//m_lstserverList.push_back(systemPresetServer);

	addChild(systemPresetServer);
	addChild(paramPresetServer);
}


ServerFactory::~ServerFactory()
{
	delete(paramPresetServer);
	delete(systemPresetServer);
}

bool ServerFactory::loadDataFactory()
{
	loadData();
	std::list<DataServerBase*>::iterator iter;
	for (iter = m_lstserverList.begin(); iter != m_lstserverList.end(); iter++)
	{
		(*iter)->loadData();
	}
	//paramPresetServer->loadData();
	//systemPresetServer->loadData();
	return false;
}

bool ServerFactory::saveDataFactory()
{
	saveData();
	std::list<DataServerBase*>::iterator iter;
	for (iter = m_lstserverList.begin(); iter != m_lstserverList.end(); iter++)
	{
		(*iter)->saveData();
	}
	//paramPresetServer->saveData();
	//systemPresetServer->saveData();
	return false;
}

bool ServerFactory::loadData()
{
	printf("%s server load data.\n", getDescription().c_str());
	return false;
}

bool ServerFactory::saveData()
{
	printf("%s server save data.\n", getDescription().c_str());
	return false;
}

void main()
{
	ServerFactory sf;
	//sf.loadDataFactory();
	//sf.saveDataFactory();
	sf.loadTreeData();
	sf.saveTreeData();
}