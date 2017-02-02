#ifndef CONTROLCOMPONENT_H
#define CONTROLCOMPONENT_H

#include "Component.h"

class ControlComponent : public Component
{
public:
	ControlComponent() { m_type = "control"; }
};

#endif