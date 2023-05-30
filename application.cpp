#include "cat.h"
#include "dog.h"
#include "parrot.h"

namespace print
{
	void dog()
	{
		Dog* dog = new Dog();
		dog->print();
		dog->say();
		dog->action();
		delete dog;
	}
}

namespace print
{
	void cat()
	{
		Cat* cat = new Cat();
		cat->print();
		cat->say();
		cat->action();
		delete cat;
	}
}

namespace print 
{
	void parrot()
	{
		Parrot* parrot = new Parrot();
		parrot->print();
		parrot->say();
		parrot->action();
		delete parrot;
	}
}

int main()
{
	print::dog();
	print::cat();
	print::parrot();
	return 0;
}