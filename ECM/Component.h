#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

using namespace std;

class Component
{
public:

	Component() {}
	~Component() {}

	string getType() const { return m_type; }

protected:
	string m_type;
};

#endif