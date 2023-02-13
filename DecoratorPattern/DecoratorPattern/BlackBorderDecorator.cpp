#include "BlackBorderDecorator.h"
#include <iostream>

BlackBorderDecorator::BlackBorderDecorator(Component* component)
	: ComponentDecorator(component)
{

}

void BlackBorderDecorator::Display()
{
	//开始装饰
	this->SetBlackBorder();
	ComponentDecorator::Display();
}

void BlackBorderDecorator::SetBlackBorder() const
{
	std::cout << "为构件添加黑边框！" << std::endl;
}
