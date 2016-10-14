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
	m_lstChildList.push_back(server);
}

void ObjectTree::deleteChild(DataServerBase * server)
{
	m_lstChildList.remove(server);
}

bool ObjectTree::loadData()
{
	return false;
}

bool ObjectTree::saveData()
{
	return false;
}

/*move the load and save data function to DataServerBase, it will define  the interface of load and save data.*/

/*bool ObjectTree::loadSelfAndTreeData()
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
*/
