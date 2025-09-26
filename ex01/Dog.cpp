#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "[Dog] was created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.getType()), brain(new Brain(*other.brain))
{
	std::cout << "[Dog] was copied." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "[Dog] was destroyed." << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.getType();
		*brain = *other.brain;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "[Dog] barks!" << std::endl;
}

const Brain	*Dog::getBrain() const
{
	return (brain);
}
