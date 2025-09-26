#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] was created." << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat::~Cat()
{
	std::cout << "[Cat] was destroyed." << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "[Cat] says meow!" << std::endl;
}
