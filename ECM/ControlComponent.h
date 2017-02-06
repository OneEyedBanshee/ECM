#ifndef CONTROLCOMPONENT_H
#define CONTROLCOMPONENT_H

#include "Component.h"

class ControlComponent : public Component
{
public:
	ControlComponent() : 
		m_keyPressed(false) 
	{
		m_type = "control";
	}

	int getKeyPressed() const { return m_keyPressed; }
	void setKeyPressed(bool value) { m_keyPressed = value; }

private:
	bool m_keyPressed;
};

#endif