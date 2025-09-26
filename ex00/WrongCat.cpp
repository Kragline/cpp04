#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] " << type << " was created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] " << type << " was destroyed." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "[WrongCat] says meow!" << std::endl;
}
