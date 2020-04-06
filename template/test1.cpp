#include <iostream>
#include <string>

using namespace std;

template<typename T>
void  Swap(T& a,T& b)
{
	T c = a;
	a = b;
	b = c;
}
template <typename T>
void Sort(T a[],int len)
{
	for(int i = 0;i < len;i++)
	{
		for(int j=i;j<len;j++)
		{
			if(a[i] > a[j])
			{
				Swap(a[i],a[j]);
			}
		}
	}
	
}
template <typename T>
void PrintLn(T a[],int len)
{
	for(int i = 0;i < len;i++)
	{
		cout << a[i] << ",";
	}
	cout << endl;
}
int main()
{
	int a[5] = {5,4,3,2,1};
	PrintLn(a,5);
	Sort(a,5);
	PrintLn(a,5);

	string s[5] = {"Java","C++","Pascal","Ruby","Basic"};
	PrintLn(s,5);
	Sort(s,5);
	PrintLn(s,5);

	return 0;
}
