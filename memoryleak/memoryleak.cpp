#include <iostream>
#include <string>

using namespace std;

class Test
{
	int i;
public:
	Test(int i)
	{
		this->i = i;
	}
	int value()
	{
		return i;
	}
	~Test()
	{

	}
};

int main()
{
	for(int i = 0;i < 5;i++)
	{
		Test *p = new Test(i);
		cout << p->value() << endl;
	}
	return 0;
}

