#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include <vector>
#include <iostream>
#include "Entity.h"
#include "PositionComponent.h"

using namespace std;

class RenderSystem
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
		cout << "RenderSystem Update:" << endl;

		for (Entity* e : m_entities)
		{
			PositionComponent* p = (PositionComponent*)e->getComponent("position");			

			if (p != NULL)
				cout << e->name.c_str() << " is being rendered at position: " << p->getPosition().first << ", " << p->getPosition().second << endl;
		}
	}

private:
	vector<Entity*> m_entities;
};

#endif