#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] was created." << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog::~Dog()
{
	std::cout << "[Dog] was destroyed." << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[Dog] barks!" << std::endl;
}
