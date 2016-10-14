#pragma once
#include "DataServerBase.h"
class ParamPresetServer: 
	public DataServerBase
{
public:
	ParamPresetServer();
	virtual ~ParamPresetServer();

	virtual bool loadData();
	virtual bool saveData();
};

