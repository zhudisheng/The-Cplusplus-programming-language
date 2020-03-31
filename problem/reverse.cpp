#include <iostream>
#include <string>

using namespace std;

int main()
{
	const char*p = "12345";
	string s1 = "22222";
	string s = "";
	
	s.reserve(10);
	for(int i = 0;i < 5;i++)
	{
		s[i] = p[i];
	}
	s = s1;
	cout << s << endl;
	return 0;
}
