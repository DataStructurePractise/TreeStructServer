#pragma once
#include "ParamPresetServer.h"
#include "SystemPresetServer.h"
#include "DataServerBase.h"
#include <list>

class ServerFactory:
	public DataServerBase
{
public:
	ServerFactory();
	~ServerFactory();
	bool loadDataFactory();
	bool saveDataFactory();

	virtual bool loadData();
	virtual bool saveData();

private:
	DataServerBase * paramPresetServer;
	DataServerBase* systemPresetServer;

	std::list<DataServerBase*> m_lstserverList;
};

