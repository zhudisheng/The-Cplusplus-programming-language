#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
	virtual void print()
	{
		cout << "I'm Parent." << endl;
	}
};
class Child:public Parent
{
public:	
	void print()
	{
		cout << "I'm Child."<< endl;
	}
};
void how_to_print(Parent *p)
{
	p->print();
}
int main()
{
	Parent p;
	Child c;
	how_to_print(&p);
	how_to_print(&c);
	return 0;
}



