#include "DataServerBase.h"
#include "stdio.h"


DataServerBase::DataServerBase():m_sServerDescription("no name")
{
}


DataServerBase::~DataServerBase()
{
}

bool DataServerBase::loadData()
{
	printf("server load data.\n");
	return false;
}

bool DataServerBase::saveData()
{
	printf("server save data.\n");
	return false;
}

bool DataServerBase::loadTreeData()
{
	//load self data first
	loadData();

	//load tree data, child node.
	std::list<DataServerBase*>::iterator it;
	for (it = m_lstChildList.begin(); it != m_lstChildList.end(); it++)
	{
		(*it)->loadTreeData();
	}
	return false;
}

bool DataServerBase::saveTreeData()
{
	//save self data first
	saveData();

	//save tree data, child node.
	std::list<DataServerBase*>::iterator it;
	for (it = m_lstChildList.begin(); it != m_lstChildList.end(); it++)
	{
		(*it)->saveTreeData();
	}
	return false;
}

void DataServerBase::setDescription(std::string serverName)
{
	m_sServerDescription = serverName;
}

std::string DataServerBase::getDescription()
{
	return m_sServerDescription;
}
