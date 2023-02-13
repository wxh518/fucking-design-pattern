#pragma once
#include "Component.h"

class ComponentDecorator : public Component
{
public:
	ComponentDecorator(Component* component);
	void Display() override;

protected:
	Component* m_Component;
};