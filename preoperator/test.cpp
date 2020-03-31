#include <iostream>
#include <string>

using namespace std;
class Test
{
	int mValue;	
public:
	Test(int i)
	{
		mValue = i;
	}
	int value()
	{
		return mValue;
	}
	Test& operator++()
	{
		++mValue;
		return *this;
	}
	Test operator++(int)
	{
		Test ret(mValue);
		mValue++;
		return ret;
	}
};
int main()
{
	Test t(0);
	t++;
	++t;

	return 0;
}
