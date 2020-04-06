#include <iostream>
#include <string>

using namespace std;

class Test
{
	Test(const Test&);
public:	
	Test()
	{
	}
};
template <typename T>
void Swap(T& a,T& b)
{
	T c = a;
	a = b;
	b = c;
}
typedef void(FuncI)(int&,int &);
typedef void(FuncD)(double&,double&);
typedef void(FuncT)(Test&,Test&);
int main()
{
	FuncT* pi = Swap;
	FuncD* pd = Swap;
	cout << "pi = " << reinterpret_cast<void*>(pi)<<endl;
	cout << "pd = " << reinterpret_cast<void*>(pd)<<endl;
	return 0;
}
