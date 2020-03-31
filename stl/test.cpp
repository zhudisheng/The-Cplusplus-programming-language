#include <stdio.h>

const char endl = '\n';

class Console
{
public:
	Console& operator<< (int i)
	{
		printf("%d",i);
		return *this;
	}
	Console& operator<< (char c) 
	{
		printf("%c",c);
		return *this;
	}
	Console& operator<<(const char* s)
	{
		printf("%s",s);
		return *this;
	}
	Console& operator<< (double d)
	{
		printf("%f",d);
		return *this;
	}

};
Console cout;
int main()
{
	cout << 1 << endl;
	cout << "D.T.Software" << endl;
	double a = 0.1;
	double b = 0.2;
	cout << a + b << endl;
	return 0;
}
