#include <iostream>
#include <string>

using namespace std;

#define SWAP(t,a,b) \
do 	            \
{		    \
	t c = a     \
	a = b       \
	b = c       \
}while(0)
	

void Swap(int &a,int &b)
{
	int c = a;
	a = b;
	b = c;
}
void Swap(double &a,double &b)
{
	double c = a;
	a = b;
	b = c;
}
void Swap(string &a,string &b)
{
	string c = a;
	a = b;
	b = c;
}
int main()
{
	int a = 0;
	int b = 1;
	Swap(a,b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double m = 2;
	double n = 3;
	Swap(m,n);
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;

	string d = "zhuxinran";
	string t = "zhuran";
	Swap(d,t);
	cout << "d = " << d << endl;
	cout << "t = " << t << endl;
	return 0;
}
