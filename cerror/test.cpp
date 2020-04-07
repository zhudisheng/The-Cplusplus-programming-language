#include <iostream>
#include <string>
#include <csetjmp>
using namespace std;

static jmp_buf env;

double divide(double a,double b)
{
	const double delta = 0.00000001;
	double ret = 0;
	if(!((-delta < b)&&(b<delta)))
	{
		ret = a/b;
	}
	else
	{
		longjmp(env,1);
	}
	return ret;
}
int main(int argc,char *argv[])
{
	if(setjmp(env) == 0)
	{
		double r = divide(1,0);
		cout << "r = "<<r<<endl;
	}
	else
	{
		cout << "Divided by zero..."<<endl;
	}
	return 0;
}
