#pragma once
#include "DataServerBase.h"

class ManagerServer
{
public:
	ManagerServer();
	~ManagerServer();

	bool loadServerData();
	bool saveServerData();

private:
	//DataServerBase * systemServer;
	//DataServerBase * paramServer;

	ObjectTree * systemServer;
	ObjectTree * paramServer;
};

