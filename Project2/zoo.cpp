#include "zoo.h"

void Zoo::addAnimal(Animal* animal)
{
	animals[animalCount] = animal;
	animalCount++;
};
void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)
	{
		animals[i]->makesound();
	}
}
Zoo::~Zoo() {
	for (int i = 0; i < animalCount; i++) {
		delete animals[i];
	}
}