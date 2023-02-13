#pragma once
#include "ComponentDecorator.h"

class ScrollBarDecorator : public ComponentDecorator
{
public:
	ScrollBarDecorator(Component* component);
	void Display() override;
	void SetScrollBar() const;
};