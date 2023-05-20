#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pet abstract
{
protected:
	string name;
	string type;
public:
	//constructor
	Pet()
	{
		this->name = "unknow";
		this->type = "unknow";
	}
	virtual void  Show() = 0;
	virtual void  Type() = 0;
	//destructor
	virtual ~Pet()
	{
		name.clear();
		type.clear();
	};
};


class Dog : public Pet
{
public:
	//constructor
	Dog()
	{
		this->name = "Bob";
		this->type = "doberman";
	};
	void Show()  override
	{
		cout << "Name: " << name << endl;
	}
	void Type()  override
	{
		cout << "Type: " << type << endl;
	}
	//destructor
	~Dog()
	{
		name.clear();
		type.clear();
	};
};


class Cat : public Pet
{
public:
	//constructor
	Cat()
	{
		this->name = "Tom";
		this->type = "siam";
	};
	void Show()  override
	{
		cout << "Name: " << name << endl;
	}
	void Type()  override
	{
		cout << "Type: " << type << endl;
	}
	//destructor
	~Cat()
	{
		name.clear();
		type.clear();
	};
};


namespace soundDog
{
	void Sound()
	{
		cout << "Dog" << endl;
		cout << "Say: Gav" << endl;
	}
}
namespace soundCat
{
	void Sound()
	{
		cout << "Cat" << endl;
		cout << "Say: Meow" << endl;
	}
}


int main()
{
	cout << "Pets:" << endl;
	vector<Pet*> pets;
	pets.push_back(new Cat());
	pets.push_back(new Dog());

	for (int i = 0; i < pets.size(); i++)
	{
		pets[i]->Show();
		pets[i]->Type();
		cout << endl;
	}
	cout << "Sounds:" << endl;
	soundDog::Sound();
	soundCat::Sound();
	for (int i = 0; i < pets.size(); i++)
	{
		delete pets[i];
	}
	pets.clear();
	return 0;
}