#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <vector>
#include <iostream>
#include "Entity.h"
#include "PositionComponent.h"
#include "ControlComponent.h"

using namespace std;

class ControlSystem
{
public:
	void addEntity(Entity * e)
	{
		m_entities.push_back(e);
	}

	void removeEntity(Entity * e)
	{
		for (int i = 0; i < m_entities.size(); i++)
		{
			if (m_entities.at(i) == e)
			{
				m_entities.erase(m_entities.begin() + i);
				break;
			}
		}
	}

	void update() {
		cout << "ControlSystem Update:" << endl;

		for (Entity* e : m_entities)
		{
			PositionComponent* p = (PositionComponent*)e->getComponent("position");
			ControlComponent* c = (ControlComponent*)e->getComponent("control");

			if (p != NULL) 
				cout << e->name.c_str() << " Control Component positioned at: " << p->getPosition().first << ", " << p->getPosition().second << endl;

			if (c != NULL)
			{
				cout << "Key status for entity: " << e->name.c_str() << ", AnyKeyPressed: " << c->getKeyPressed() << endl;
			}			
		}
	}

private:
	vector<Entity*> m_entities;
};

#endif