#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <map>
#include "Component.h"

using namespace std;

class Entity
{	
public:
	Entity() {};
	~Entity() { m_components.clear(); };

	string name;

	void addComponent(Component* c) 
	{ m_components[c->getType()] = c; }

	void removeComponent(std::string name)
	{ m_components.erase(name); }

	Component* getComponent(std::string name) {
		map<std::string, Component*>::iterator it;
		it = m_components.find(name);

		if (it != m_components.end())
		{
			return it->second;
		}
		return NULL;
	}

private:
	map<std::string, Component*> m_components;
protected:
	int m_id;
};

#endif