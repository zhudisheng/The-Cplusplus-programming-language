#include <stdio.h>

class Test
{
private:
	int i;
	int j;
	int *p;
public:
	int getI()
	{
		return i;
	}
	int getJ()
	{
		return j;
	}
	int* getP()
	{
		return p;
	}
	Test(const Test& t)
	{
		i = t.i;
		j = t.j;
		p = new int;
		*p = *t.p;
	}
	
	Test(int v)
	{
		i = 1;
		j = 2;
		p = new int;
		*p = v;
	}
	void free()
	{
		delete p;
	}
};
int main()
{
	Test t1(3);
	Test t2(t1);
	//kTest t2 = t1;
	//Test t2;
	int i = 2;
	int j = i;
	printf("t1.i = %d, t1.j = %d,*t1.p = %d\n",t1.getI(),t1.getJ(),*t1.getP());
	printf("t2.i = %d, t2.j = %d,*t1.p = %d\n",t2.getI(),t2.getJ(),*t2.getP());
	//t1.free();
	//t2.free();
	return 0;
}
