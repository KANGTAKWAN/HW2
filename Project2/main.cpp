#include "animal.h"
#include "zoo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Animal* createRandomAnimal() {
	int randint = rand() % 3;
	if (randint == 0) {
		return new Dog;
	}
	else if (randint == 1) {
		return new Cat;
	}
	else {
		return new Cow;
	}
}



int main()
{
	srand(time(0));
	const int size = 3;
	Animal * animals[size] = {};

	Dog myDog;
	Cat myCat;
	Cow myCow;
	
	Zoo myZoo;
	myZoo.addAnimal(createRandomAnimal());
	myZoo.addAnimal(createRandomAnimal());
	myZoo.addAnimal(createRandomAnimal());
	myZoo.addAnimal(createRandomAnimal());
	myZoo.addAnimal(createRandomAnimal());
	myZoo.performActions();
	return 0;
}