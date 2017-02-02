#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include "Entity.h"
#include <vector>
#include <iostream>

using namespace std;

class HealthSystem
{
public:
	void addEntity(Entity e) { m_entities.push_back(e); }
	void update()
	{
		for (int i = 0; i < m_entities.size(); i++)
		{
			vector<Component> components = m_entities[i].getComponents();
			for (int i = 0; i < components.size(); i++)
			{
				if (components[i].getType() == "health")
				{
					cout << "updated health component!!" << endl;
				}
			}
		}
	}
private:
	vector<Entity> m_entities;
};

#endif