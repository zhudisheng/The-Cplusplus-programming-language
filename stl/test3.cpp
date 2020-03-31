#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Hello world!" << endl;
	double a = 0;
	double b = 0;
	cout << "Input a:";
	cin >> a;
	cout << "Input b:";
	cin >> b;
	double c = sqrt(a*a+b*b);
	cout << "c = " << c << endl;
}
