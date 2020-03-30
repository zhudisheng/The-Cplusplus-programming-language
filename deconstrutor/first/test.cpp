#include <stdio.h>

class Test
{
	int mi;
public:
	Test(int i)
	{
		mi = i;
		printf("Test():%d\n",mi);
	}
	~Test()
	{
		printf("~Test():%d\n",mi);
	}
};
int main()
{
	Test t(1);
	Test *pt = new Test(2);
	delete pt;
	return 0;
}
