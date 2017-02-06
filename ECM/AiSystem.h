#ifndef AISYSTEM_H
#define AISYSTEM_H

#include <vector>
#include <iostream>
#include "Entity.h"
#include "PositionComponent.h"
#include "HealthComponent.h"

using namespace std;

class AiSystem
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
		cout << "AiSystem Update:" << endl;

		for (Entity* e : m_entities)
		{
			PositionComponent* p = (PositionComponent*)e->getComponent("position");
			HealthComponent* h = (HealthComponent*)e->getComponent("health");

			if (p != NULL)
				cout << e->name.c_str() << " Health Component positioned at:" << p->getPosition().first << ", " << p->getPosition().second << endl;

			if (h != NULL)
			{
				cout << "Health of entity: " << e->name.c_str() << ", " << h->getHealth() << endl;
			}
		}
	}

private:
	vector<Entity*> m_entities;
};

#endif