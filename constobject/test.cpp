#include <stdio.h>

class Test
{
	int mi;
	public:
	int mj;
	Test(int i);
	Test(const Test& t);
	int getMi();
	int print();
};
Test::Test(int i)
{
	mi = i;
}
Test::Test(const Test& t)
{
}

int Test::getMi()
{
	//mi = 2;
	return mi;
}
int Test::print()
{
	printf("this = %p\n",this);
}
int main()
{
	//const Test t(1);
	Test t1(1);
	Test t2(2);
	Test t3(3);
	printf("%d\n",sizeof(Test));
	printf("%d\n",sizeof(t1));
	printf("%d\n",sizeof(t2));
	printf("%d\n",sizeof(t3));
	printf("t1.getMi() = %d\n",t1.getMi());
	printf("&t1 = %p\n",&t1);
	t1.print();
	printf("t2.getMi() = %d\n",t2.getMi());
	printf("&t2 = %p\n",&t2);
	t2.print();
	printf("t3.getMi() = %d\n",t3.getMi());
	printf("&t3 = %p\n",&t3);
	t3.print();
	return 0;
}
