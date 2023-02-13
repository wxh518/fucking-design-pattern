#include <iostream>
#include "Window.h"
#include "TextBox.h"
#include "ListBox.h"
#include "ScrollBarDecorator.h"
#include "BlackBorderDecorator.h"

int main()
{
	std::cout << "test Decorator Pattern!" << std::endl;

	Component* window = new Window();
	Component* scrollbarDecorator = new ScrollBarDecorator(window);
	//��װ�ι�һ�ε�����ٴ�װ��
	Component* blackborderDecorator = new BlackBorderDecorator(scrollbarDecorator);
	blackborderDecorator->Display();

	std::cout << "-----------------------" << std::endl;
	Component* textbox = new TextBox();
	Component* scrollbarDecorator2 = new ScrollBarDecorator(textbox);
	scrollbarDecorator2->Display();

	std::cout << "-----------------------" << std::endl;
	Component* listbox = new ListBox();
	Component* blackborderDecorator2 = new BlackBorderDecorator(listbox);
	blackborderDecorator2->Display();

	std::cin.get();
	return 0;
}