#include <iostream>
#include <string>

using namespace std;

class Base
{
};
class Exception:public Base
{
	int m_id;
	string m_desc;
public:
	Exception(int id,string desc)
	{
		m_id = id;
		m_desc = desc;
	}
	int id()const
	{
		return m_id;
	}
	string description()const
	{
		return m_desc;
	}
};
void func(int i)
{
	if(i < 0)
	{
		throw -1;
	}
	if(i > 100)
	{	
		throw -2;
	}
	if(i == 11)
	{
		throw -3;
	}
	cout << "Run func..."<<endl;
}
void MyFunc(int i)
{
	try
	{
		func(i);
	}
	catch(int i)
	{
		switch(i)
		{
			case -1:
				throw Exception(-1,"Invalid Parameter");
				break;
			case -2:
				throw Exception(-2,"Runtime Exception");
				break;
			case -3:
				throw Exception(-3,"Timeout Exception");
				break;
		}
	}
}
int main(int argc,char *argv[])
{
	try
	{
		MyFunc(11);
	}
	catch(const Exception& e)
	{
		cout << "Exception Info:"<<endl;
		cout << "ID:"<<e.id() << endl;
		cout << "Description:"<<e.description()<<endl;
	}
	catch(const Base&e)
	{
		cout << "catch(const Base& e)"<<endl;
	}
	return 0;
}
