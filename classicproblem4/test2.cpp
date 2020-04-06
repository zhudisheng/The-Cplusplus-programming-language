#include <iostream>
#include <string>

using namespace std;
class Base
{
public:
	Base()
	{
		cout << "Base::Base()"<<endl;
	}
	virtual ~Base()
	{
		cout << "Base::~Base()"<<endl;
	}
};
class Derived:public Base
{

};
int main()
{
	Base* p = new Base;
	Derived* pd = dynamic_cast<Derived*>(p);
	if(pd != NULL)
	{
		cout << "pd = " << pd << endl;
	}
	else
	{
		cout << "Cast error!" << endl;
	}
	delete p;
	return 0;
}
