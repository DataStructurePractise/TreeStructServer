#include "ParamPresetServer.h"



ParamPresetServer::ParamPresetServer()
{
	setDescription("ParamPreset");
}


ParamPresetServer::~ParamPresetServer()
{
}

bool ParamPresetServer::loadData()
{
	printf("%s server load data.\n", getDescription().c_str());
	return false;
}

bool ParamPresetServer::saveData()
{
	printf("%s server save data.\n", getDescription().c_str());
	return false;
}
