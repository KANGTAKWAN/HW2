#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
public:
	virtual ~Animal() {};
	virtual void makesound() = 0;
};
class Dog : public Animal {
public:
	void makesound();
};
class Cat : public Animal {
public:
	void makesound();
};
class Cow : public Animal {
public:
	void makesound();
};
#endif