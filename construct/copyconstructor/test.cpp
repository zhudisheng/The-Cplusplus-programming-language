#include <stdio.h>

class Test
{
private:
	int i;
	int j;
public:
	int getI()
	{
		return i;
	}
	int getJ()
	{
		return j;
	}
	Test(const Test& t)
	{
		i = t.i;
		j = t.j;
	}
	Test()
	{
	}
};
int main()
{
	Test t1;
	Test t2 = t1;
	//Test t2;
	int i = 2;
	int j = i;
	printf("t1.i = %d, t1.j = %d\n",t1.getI(),t1.getJ());
	printf("t2.i = %d, t2.j = %d\n",t2.getI(),t2.getJ());
	return 0;
}
