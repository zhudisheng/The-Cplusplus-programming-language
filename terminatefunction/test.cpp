#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;
void my_terminate()
{
	cout << "void my_terminate()"<<endl;
	exit(1);
}
class Test
{
public:
	Test()
	{
		cout << "Test()";
		cout << endl;
	}
	~Test()
	{
		cout << "~Test()";
		cout << endl;
	}
};
int main()
{
	set_terminate(my_terminate);
	static Test t;
	throw 1;
	return 0;
}
