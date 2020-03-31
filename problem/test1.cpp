#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "12345";
	const char *p = s.c_str();
	
	cout << p << endl;
	s.append("abcde");
	cout << s << endl;
	return 0;
}
