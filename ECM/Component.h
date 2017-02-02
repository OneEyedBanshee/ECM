#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

using namespace std;

class Component
{
public:
	Component() :m_type("") {}
	~Component() {}

	string getType() { return m_type; }

	string m_type;
protected:
	
};

#endif