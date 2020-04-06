#include <iostream>
#include <string>

using namespace std;

class BaseA
{
	int ma;
public:
	BaseA(int a)
	{
		ma = a;
	}
	int getA()
	{
		return ma;
	}
};
class BaseB
{
	int mb;
public:
	BaseB(int b)
	{
		mb = b;
	}
	int getB()
	{
		return mb;
	}
};
class Derived:public BaseA,public BaseB
{
	int mc;
public:
	Derived(int a,int b,int c):BaseA(a),BaseB(b)
	{
		mc = c;
	}
	int getC()
	{
		return mc;
	}
	void print()
	{
		cout << "ma = " << getA() << ","
		     << "mb = " << getB() << ","
		     << "mc = " << mc << endl;
	}
};
int main()
{
	cout << "sizeof(Derived) = " << sizeof(Derived) << endl;
	Derived d(1,2,3);
	d.print();

	cout << "d.getA() = " << d.getA() << endl;
	cout << "d.getB() = " << d.getB() << endl;
	cout << "d.getC() = " << d.getC() << endl;
	
	cout << endl;
	BaseA* pa = &d;
	BaseB* pb = &d;
	cout << "pa->getA() = " << pa->getA() << endl;
	cout << "pb->getB() = " << pb->getB() << endl;
	cout << endl;
	
	void *paa = pa;
	void *pbb = pb;
	if(paa == pbb)
	{
		cout << "Pointer to the same object!" << endl;
	}
	else
	{
		cout << "Error!"<<endl;
	}
	
	return 0;
}
