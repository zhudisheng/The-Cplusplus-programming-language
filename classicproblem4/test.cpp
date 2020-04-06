#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Test
{
	int *mp;
public:
	Test()
	{
		cout << "Test::Test()"<<endl;
		mp = new int(100);
		cout << *mp << endl;
	}
	~Test()
	{
		delete mp;
		cout << "Test::~Test()"<<endl;
	}
};
int main()
{
	Test* pn = new Test;
	Test* pm = (Test*)malloc(sizeof(Test));
	delete pn;
	free(pm);
	return 0;
}
