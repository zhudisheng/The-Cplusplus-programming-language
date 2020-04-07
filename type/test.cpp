#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	virtual string type()
	{
		return "Base";
	}
};
class Derived:public Base
{
public:
	string type()
	{
		return "Derived";
	}
	void printf()
	{
		cout << "I'm a Derived."<<endl;
	}
};
class Child:public Base
{
public:
	string type()
	{
		return "Child";
	}
};
void test(Base *b)
{
	if(b->type() == "Derived")
	{
		Derived* d= static_cast<Derived*>(b);
		d->printf();
	}
}
int main()
{
	Base b;
	Derived d;
	Child c;
	test(&b);
	test(&d);
	test(&c);
	return 0;
}
