#include "ObjectTree.h"
#include <iterator>


ObjectTree::ObjectTree()
{
}


ObjectTree::~ObjectTree()
{
}

void ObjectTree::addChild(DataServerBase * server)
{
	m_childList.push_back(server);
}

void ObjectTree::deleteChild(DataServerBase * server)
{
	m_childList.remove(server);
}

bool ObjectTree::loadData()
{
	return false;
}

bool ObjectTree::saveData()
{
	return false;
}

bool ObjectTree::loadSelfAndTreeData()
{
	loadData();
	std::list<DataServerBase*>::iterator it;
	for (it = m_childList.begin(); it != m_childList.end(); it++)
	{
		((ObjectTree*)(*it))->loadSelfAndTreeData();
	}
	return false;
}

bool ObjectTree::saveSelfAndTreeData()
{
	saveData();
	std::list<DataServerBase*>::iterator it;
	for (it = m_childList.begin(); it != m_childList.end(); it++)
	{
		((ObjectTree*)(*it))->saveSelfAndTreeData();
	}
	return false;
}
