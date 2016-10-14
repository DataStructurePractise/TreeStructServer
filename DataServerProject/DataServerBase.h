#pragma once
#include <string>
#include "ObjectTree.h""

class DataServerBase: public ObjectTree
{
public:
	DataServerBase();
	~DataServerBase();
	virtual bool loadData();
	virtual bool saveData();
	bool loadTreeData();
	bool saveTreeData();
	void setDescription(std::string serverName);
	std::string getDescription();

private:
	std::string m_sServerDescription;
};

