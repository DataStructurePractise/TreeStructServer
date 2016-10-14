#pragma once
//#include "DataServerBase.h"
#include <list>

class DataServerBase;
class ObjectTree
{
public:
	ObjectTree();
	~ObjectTree();

	void addChild(DataServerBase* server);
	void deleteChild(DataServerBase* server);

	virtual bool loadData();
	virtual bool saveData();

	//bool loadSelfAndTreeData();
	//bool saveSelfAndTreeData();

protected:
	std::list<DataServerBase*> m_lstChildList;
};

