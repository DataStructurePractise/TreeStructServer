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

void DataServerBase::setDescription(std::string serverName)
{
	m_sServerDescription = serverName;
}

std::string DataServerBase::getDescription()
{
	return m_sServerDescription;
}
