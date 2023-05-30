#include "animal.h"

class Cat : public Pet
{
public:
	//constructor
	Cat()
	{
		this->name = "Tom";
		this->year = 1;
		this->breed = "siam";
		this->color = "white";
	};
	void print() override
	{
		cout << "Name: " << name << endl;
		cout << "Year: " << year << endl;
		cout << "Breed: " << breed << endl;
		cout << "Color: " << color << endl;
	}
	void say() override
	{
		cout << "Meow" << endl;
	}
	void action() override
	{
		cout << "Jump" << endl;
	}
	//destructor
	~Cat()
	{
		name.clear();
		breed.clear();
		color.clear();
		year = 0;
	};
};