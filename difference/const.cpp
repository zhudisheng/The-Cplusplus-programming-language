#include <stdio.h>

void f()
{
	#define a 3
	const int b = 4;
}
void g()
{
	printf("a=%d\n",a);
//	printf("b=%d\n",b);
}

int main()
{
	const int A = 1;
	const int B = 2;

	int array[A+B] = {0};
	int i = 0;
	for(i=0;i<(A+B);i++)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
	f();
	g();
	return 0;
}
