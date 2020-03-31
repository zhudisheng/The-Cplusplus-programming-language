#include <iostream>
#include <string>

using namespace std;

string operator>> (const string& s,unsigned int n)
{
	string ret = "";
	unsigned int pos = 0;
	
	n = n%s.length();
	pos = s.length() -n;
	ret = s.substr(pos);
	ret += s.substr(0,pos);
	return ret;
}
int main()
{
	string s = "abcdefg";
	string r = (s >> 3);
	cout << r << endl;
	return 0;
}
