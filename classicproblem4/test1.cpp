#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base()" << endl;
		func();
	}
	virtual void func()
	{
		cout << "Base::func()"<<endl;
	}
	virtual ~Base()
	{
		func();
		cout << "~Base()"<<endl;
	}
};
class Derived:public Base
{
public:
	Derived()
	{
		cout << "Derived()" << endl;
		func();
	}
	virtual void func()
	{
		cout << "Derived::func()"<<endl;
	}
	~Derived()
	{
		func();
		cout << "~Derived()"<<endl;
	}
};
int main()
{
	Base *p = new Derived();
	delete p;
	return 0;
}
