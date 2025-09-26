#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	testBasicFunctionality()
{
	std::cout << "\n=== Basic Functionality Tests ===\n" << std::endl;

	// Test Animal
	Animal	animal;
	std::cout << "Animal type: " << animal.getType() << std::endl;
	animal.makeSound();

	// Test Cat
	Cat	cat;
	std::cout << "Cat type: " << cat.getType() << std::endl;
	cat.makeSound();

	// Test Dog
	Dog	dog;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	dog.makeSound();
}

void	testPolymorphism()
{
	std::cout << "\n=== Polymorphism Tests ===" << std::endl;

	std::cout << "\nCorrect polymorphism:" << std::endl;
	const Animal	*animals[] = { new Animal(), new Cat(), new Dog() };

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Type: " << animals[i]->getType() << " - ";
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		delete animals[i];

	std::cout << "\nBroken polymorphism:" << std::endl;
	const WrongAnimal* wrongAnimals[] = {new WrongAnimal(), new WrongCat()};

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Type: " << wrongAnimals[i]->getType() << " - ";
		wrongAnimals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		delete wrongAnimals[i];
}

int	main()
{
	std::cout << "Running tests for Animal hierarchy..." << std::endl;

	testBasicFunctionality();
	testPolymorphism();

	std::cout << "\n=== Tests completed ===" << std::endl;
	return (0);
}
