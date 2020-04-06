#include <iostream>
#include <string>
using namespace std;
template<typename T1,typename T2,typename T3>
T1 Add(T2 a,T3 b)
{
	return static_cast<T1>(a+b);
}
int main()
{
	int r1 = Add<int>(0.5,0.8);
	double r2 = Add<double,float>(0.5,0.8);
	float r3 = Add<float,float,float>(0.5,0.8);
	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
	cout << "r3 = " << r3 << endl;
	return 0;
}
