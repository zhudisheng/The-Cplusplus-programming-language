#include <iostream>
#include <string>

using namespace std;

class Test
{
	int mValue;
public:
	Test(int i = 0)
	{
		mValue = i;
	}
	int value()
	{
		return mValue;
	}
	operator int ()
	{
		return mValue;
	}
};
int main()
{
	Test t(100);
	int i = t;
	cout << "t.value() = " << t.value() << endl;
	cout << "i = " << i << endl;
	return 0;
}
