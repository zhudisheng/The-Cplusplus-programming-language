#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#define TO_NUMBER(s,n) (istringstream(s) >> n)
#define TO_STRING(n) (((ostringstream&)(ostringstream() << n)).str())

int main()
{
	double n = 0;
	if(TO_NUMBER("234.567",n));
	{
		cout << n << endl;
	}
	string s = TO_STRING(12345);
	cout << s << endl;
	return 0;
}
