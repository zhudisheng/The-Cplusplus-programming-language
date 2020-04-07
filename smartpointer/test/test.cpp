#include <iostream>
#include <string>
#include "SmartPointer.h"

using namespace std;

class Test
{
	string m_name;
public:
	Test(const char*name)
	{
		cout << "Hello,"<<name<<"."<<endl;
		m_name = name;
	}
	void print()
	{
		cout << "I'm"<<m_name<<"."<<endl;
	}
	~Test()
	{
		cout << "Goodbye,"<<m_name<<"."<<endl;
	}
};
int main()
{
	SmartPointer<Test>pt(new Test("Zhuxinran"));
	cout << "pt = "<<pt.get()<<endl;
	pt->print();
	cout << endl;
	SmartPointer<Test>pt1(pt);
	cout << "pt = "<<pt.get()<<endl;
	cout << "pt1 = "<<pt1.get()<<endl;
	pt1->print();

	return 0;
}
