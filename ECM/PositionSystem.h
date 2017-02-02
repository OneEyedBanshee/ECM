#ifndef POSITIONSYSTEM_H
#define POSITIONSYSTEM_H

#include "Entity.h"
#include <vector>
#include <iostream>

using namespace std;

class PositionSystem
{
public:
	void addEntity(Entity ent) { m_entities.push_back(ent); }
	void update()
	{
		for (int i = 0; i < m_entities.size(); i++)
		{
			vector<Component> components = m_entities[i].getComponents();
			for (int i = 0; i < components.size(); i++)
			{
				if (components[i].getType() == "position")
				{
					cout << "updated position component!!" << endl;
				}
			}
		}
	}
private:
	vector<Entity> m_entities;
};

#endif