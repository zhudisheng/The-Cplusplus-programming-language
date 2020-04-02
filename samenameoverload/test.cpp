#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
	int mi;
	void add(int i)
	{
		mi += i;
	}
	void add(int a,int b)
	{
		mi += (a+b);
	}
};
class Child:public Parent
{
public:	
	int mv;
	void add(int x,int y,int z)
	{
		mi += (x+y+z);
	}
};
int main()
{
	Parent p;
	Child c;
	p = c;
	Parent p1(c);
	Parent &rp = c;
	Parent *pp = &c;
	
	rp.mi = 100;
	rp.add(5);
	rp.add(10,10);
	return 0;
}
