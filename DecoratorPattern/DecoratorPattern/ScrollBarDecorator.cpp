#include "ScrollBarDecorator.h"
#include <iostream>

ScrollBarDecorator::ScrollBarDecorator(Component* component)
	: ComponentDecorator(component)
{

}

void ScrollBarDecorator::Display()
{
	//开始装饰
	this->SetScrollBar();
	ComponentDecorator::Display();
}

void ScrollBarDecorator::SetScrollBar() const
{
	std::cout << "为构件增加滚动条！" << std::endl;
}
