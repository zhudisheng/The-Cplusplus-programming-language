#include <iostream>
#include <string>

using namespace std;

void string_sort(string a[],int len)
{
	for(int i = 0;i < len;i++)
	{	
		for(int j = i;j < len;j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
string string_add(string a[],int len)
{
	string ret = "";
	for(int i = 0;i < len;i++)
	{
		ret += a[i]+";";
	}
	ret += '\n';
	return ret;
}
int main()
{
	
	string sa[7] = 
	{
		"Hello World",
		"D.T.Software",
		"C#",
		"Java",
		"C++",
		"Python",
		"TypeScript"
	};
	string_sort(sa,7);
	for(int i = 0;i < 7;i++)
	{
		cout << sa[i] << endl;
	}
	cout << endl;
	cout << string_add(sa,7);
	return 0;
}

