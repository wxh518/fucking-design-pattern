#pragma once
#include "ComponentDecorator.h"

class BlackBorderDecorator : public ComponentDecorator
{
public:
	BlackBorderDecorator(Component* component);
	void Display() override;
	void SetBlackBorder() const;
};