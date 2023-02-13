#include "BlackBorderDecorator.h"
#include <iostream>

BlackBorderDecorator::BlackBorderDecorator(Component* component)
	: ComponentDecorator(component)
{

}

void BlackBorderDecorator::Display()
{
	//��ʼװ��
	this->SetBlackBorder();
	ComponentDecorator::Display();
}

void BlackBorderDecorator::SetBlackBorder() const
{
	std::cout << "Ϊ������Ӻڱ߿�" << std::endl;
}
