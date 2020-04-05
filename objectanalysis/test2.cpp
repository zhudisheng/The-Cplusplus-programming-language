#include <iostream>
#include <string>

using namespace std;
class Demo
{
protected:
	int mi;
	int mj;
public:
	virtual void print()
	{
		cout << "mi = " << mi << ","
		     << "mj =" << mj << endl;
	}
};
class Derived:public Demo
{
	int mk;

};
