#ifndef ZOO_H_
#define ZOO_H_
#include "./animal.h"

class Zoo
{
public:
	void addAnimal(Animal* animal);
	void performActions();
	~Zoo();

private:
	Animal* animals[10];
	int animalCount = 0;
};

#endif 