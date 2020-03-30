#include <stdio.h>
class Value
{
private:
	int mi;
public:
	Value(int i)
	{
		printf("i = %d\n",i);
		mi = i;
	}
	int getI()
	{
		return mi;
	}
};

class Test
{
private:	
	const int ci;
	Value m1;
	Value m2;
	Value m3;

public:
	Test():m1(1),m2(2),m3(3),ci(100)
	{
		printf("Test::Test()\n");
	}
	int getCI()
	{
		return ci;
	}
	int setCI(int v)
	{
		int *p = const_cast<int*>(&ci);
		*p = v;
	}
};

int main()
{
	Test t;
	printf("t.ci = %d\n",t.getCI());
	t.setCI(10);
	printf("t.ci = %d\n",t.getCI());
	return 0;
}
