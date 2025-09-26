#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "[Cat] was created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.getType()), brain(new Brain(*other.brain))
{
	std::cout << "[Cat] was copied." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "[Cat] was destroyed." << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.getType();
		*brain = *other.brain;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[Cat] says meow!" << std::endl;
}

const Brain	*Cat::getBrain() const
{
	return (brain);
}
