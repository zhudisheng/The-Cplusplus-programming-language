#include <iostream>
#include <string>

using namespace std;

class Test
{
	int a[5];
	public:
	int& operator[](int i)
	{
		return a[i];
	}
	int& operator[](const string& s)
	{
		if(s == "1st")
		{
			return a[0];
		}
		else if(s == "2nd")
		{
			return a[1];
		}
		else if(s == "3rd")
		{
			return a[2];
		}
		else if(s == "4th")
		{
			return a[3]; 
		}
		else if(s == "5th")
		{
			return a[4];
		}
		return a[0];
	}
	int length()
	{
		return 5;
	}
};
int main()
{
	Test t;
	for(int i = 0;i < t.length();i++)
	{
		t[i] = i;
	}
	for(int i = 0;i < t.length();i++)
	{
		cout << t[i] << endl;
	}
	cout << t["5th"] << endl;
	cout << t["4th"] << endl;
	cout << t["3rd"] << endl;
	cout << t["2nd"] << endl;
	cout << t["1st"] << endl;
	
	return 0;
}
