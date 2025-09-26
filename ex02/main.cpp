#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	**animals = new Animal*[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();	
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	
	std::cout << "-----------------------------------" << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete animals[i];
	delete [] animals;

	// Animal animal; remove commet and an error will occur

	return (0);
}
