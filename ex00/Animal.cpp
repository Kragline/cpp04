#include "Animal.hpp"

Animal::Animal() : type("Creature")
{
	std::cout << "[Animal] was created with a default type of Creature." << std::endl;
}

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "[Animal] was created with a type of " << type << "." << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal()
{
	std::cout << "[Animal] " << type << " was destroyed." << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

std::string	Animal::getType() const { return (type); }

void	Animal::makeSound() const
{
	std::cout << "[Animal] makes some noise!" << std::endl;
}
