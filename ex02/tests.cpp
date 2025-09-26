#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	testBasicFunctionality()
{
	std::cout << "\n=== Basic Functionality Tests ===\n" << std::endl;

	Cat	cat;
	std::cout << "Cat type: " << cat.getType() << std::endl;
	cat.makeSound();

	Dog	dog;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	dog.makeSound();
}

void	testPolymorphism()
{
	std::cout << "\n=== Polymorphism Tests ===" << std::endl;

	std::cout << "\nCorrect polymorphism:" << std::endl;
	const Animal	*animals[] = { new Cat(), new Dog() };

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Type: " << animals[i]->getType() << " - ";
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];

	std::cout << "\nBroken polymorphism:" << std::endl;
	const WrongAnimal	*wrongAnimals[] = {new WrongAnimal(), new WrongCat()};

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Type: " << wrongAnimals[i]->getType() << " - ";
		wrongAnimals[i]->makeSound();
	}

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		delete wrongAnimals[i];
}

void	testCopyAndAssignment()
{
	std::cout << "\n=== Copy and Assignment Tests ===" << std::endl;

	Cat	c1;
	Cat	c2(c1);
	std::cout << "Cat copy: c1 type = " << c1.getType() << ", c2 type = " << c2.getType() << std::endl;

	Cat	c3;
	c3 = c1;
	std::cout << "Cat assignment: c3 type = " << c3.getType() << std::endl;

	Dog	d1;
	Dog	d2(d1);
	std::cout << "Dog copy: d1 type = " << d1.getType() << ", d2 type = " << d2.getType() << std::endl;

	Dog d3;
	d3 = d1;
	std::cout << "Dog assignment: d3 type = " << d3.getType() << std::endl;
}

void	testDeepCopy()
{
	std::cout << "\n=== Deep Copy Test (Cat) ===\n" << std::endl;
	Cat	originalCat;
	Cat	copiedCat(originalCat);

	std::cout << "Original Cat address: " << &originalCat << std::endl;
	std::cout << "Copied Cat address:   " << &copiedCat << std::endl;

	std::cout << "Original Cat brain address: " << originalCat.getBrain() << std::endl;
	std::cout << "Copied Cat brain address:   " << copiedCat.getBrain() << std::endl;

	std::cout << "\n=== Deep Copy Test (Dog) ===\n" << std::endl;
	Dog	originalDog;
	Dog	copiedDog(originalDog);

	std::cout << "Original Dog address: " << &originalDog << std::endl;
	std::cout << "Copied Dog address:   " << &copiedDog << std::endl;

	std::cout << "Original Dog brain address: " << originalDog.getBrain() << std::endl;
	std::cout << "Copied Dog brain address:   " << copiedDog.getBrain() << std::endl;
}

int	main()
{
	std::cout << "Running tests for Animal hierarchy..." << std::endl;

	testBasicFunctionality();
	testPolymorphism();
	testCopyAndAssignment();
	testDeepCopy();

	std::cout << "\n=== Tests completed ===" << std::endl;
	return (0);
}
