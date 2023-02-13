#include "ComponentDecorator.h"

ComponentDecorator::ComponentDecorator(Component* component)
	: m_Component(component)
{

}

void ComponentDecorator::Display()
{
	if (m_Component)
		m_Component->Display();
}
