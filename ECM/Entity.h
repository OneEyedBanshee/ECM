#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include "Component.h"

using namespace std;

class Entity
{	
public:
	Entity() {};
	void addComponent(Component c) 
	{ m_components.push_back(c); }

	void removeComponent(Component c)
	{ }

	vector<Component> getComponents() const
	{ return m_components; }

private:
	vector<Component> m_components;
protected:
	int m_id;
};

#endif