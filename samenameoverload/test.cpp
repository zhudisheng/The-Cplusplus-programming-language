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
	p.mi =111;
	Parent p1(c);
	Parent &rp = c;
	Parent *pp = &c;
	//p.add(1,3,3);
	//p.mv = 3333;
	
	rp.mi = 100;
	//rp.mv =111;
	rp.add(5);
	rp.add(10,10);
	//rp.add(1,2,3);
	return 0;
}
