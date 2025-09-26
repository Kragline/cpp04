#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongCreature")
{
	std::cout << "[WrongAnimal] was created with a default type of WrongCreature." << std::endl;
}

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout << "[WrongAnimal] was created with a type of " << type << "." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "[WrongAnimal] was copied." << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] " << type << " was destroyed." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

std::string	WrongAnimal::getType() const { return (type); }

void	WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] makes some noise!" << std::endl;
}
