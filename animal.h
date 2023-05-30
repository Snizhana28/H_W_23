#ifndef pet_class
#define pet_class
#include <iostream>
#include <string>
using namespace std;

class Pet abstract
{
protected:
	string name;
	int year;
	string breed;
	string color;
public:
	//constructor
	Pet()
	{
		this->name = "unknow";
		this->year = 0;
		this->breed = "unknow";
		this->color = "unknow";
	}
	virtual void print() = 0;
	virtual void say() = 0;
	virtual void action() = 0;
	//destructor
	virtual ~Pet()
	{
		name.clear();
		breed.clear();
		color.clear();
		year = 0;
	};
};
#endif 