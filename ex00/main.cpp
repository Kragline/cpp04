#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	{
		const Animal	*animal = new Animal();
		const Animal	*dog = new Dog();
		const Animal	*cat = new Cat();

		std::cout << "Dog type is " << dog->getType() << std::endl;
		std::cout << "Cat type is " << cat->getType()  << std::endl;

		cat->makeSound();
		dog->makeSound();
		animal->makeSound();

		delete animal;
		delete dog;
		delete cat;
	}

	std::cout << "-------------------------------------------" << std::endl;

	{
		const WrongAnimal	*wrongAnimal = new WrongAnimal();
		const WrongAnimal	*wrongCat = new WrongCat();

		wrongCat->makeSound();
		wrongAnimal->makeSound();

		delete wrongAnimal;
		delete wrongCat;
	}

	return (0);
}
