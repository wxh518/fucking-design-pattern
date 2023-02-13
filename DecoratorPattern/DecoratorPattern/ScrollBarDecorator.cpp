#include "ScrollBarDecorator.h"
#include <iostream>

ScrollBarDecorator::ScrollBarDecorator(Component* component)
	: ComponentDecorator(component)
{

}

void ScrollBarDecorator::Display()
{
	//��ʼװ��
	this->SetScrollBar();
	ComponentDecorator::Display();
}

void ScrollBarDecorator::SetScrollBar() const
{
	std::cout << "Ϊ�������ӹ�������" << std::endl;
}
