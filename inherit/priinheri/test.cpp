#include <iostream>
#include <string>

using namespace std;

class Parent
{
protected:
	int m_a;
protected:
	int m_b;
public:
	int m_c;
	void set(int a,int b,int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}
};
class Child_A:public Parent
{
public:
	void print()
	{
		cout << "m_a" << m_a << endl;
		cout << "m_b" << m_b << endl;
		cout << "m_c" << m_c << endl;
	}
};
class Child_B:protected Parent
{
public:
	void print()
	{	
		cout << "m_a" << m_a << endl;
		cout << "m_b" << m_b << endl;
		cout << "m_c" << m_c << endl;
	}
};
class Child_C:private Parent
{
public:
	void print()
	{
		cout << "m_a" << m_a << endl;
		cout << "m_b" << m_b << endl;
		cout << "m_c" << m_c << endl;
	}
};
int main()
{
	Child_A a;
	Child_B b;
	Child_C c;
	a.m_c = 100;
	//b.m_c
	//c.m_c
	a.set(1,1,1);
	a.print();
	b.print();
	c.print();
	return 0;
}

