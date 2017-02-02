#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "Component.h"

class HealthComponent : public Component
{
public:
	HealthComponent() :  m_health(100) {}
	/* Data Only*/
	int getHealth() { return m_health; }
	void setHealth(int health) { this->m_health = health; }
private:
	int m_health;
};

#endif