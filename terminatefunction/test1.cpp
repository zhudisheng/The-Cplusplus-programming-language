#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_unexpected()
{
	cout << "void my_unexpected()"<<endl;
	throw 1;
}

void func() throw(int)
{
	cout << "func()";
	cout << endl;
	throw 'c';
}
int main()
{
	set_unexpected(my_unexpected);
	try
	{
		func();
	}
	catch(int)
	{
		cout << "cathc(int)";
		cout << endl;
	}
	catch(char)
	{
		cout << "catch(char)";
		cout << endl;
	}
	return 0;
}
