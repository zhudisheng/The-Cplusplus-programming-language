#include <stdio.h>
void f(int &b)
{
	printf("func f()\n");
	printf("&b=%p\n",&b);
}

int main(int argc,char *argv[])
{
	int a = 4;
	int &b = a;
	b = 5;
	f(b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("&a=%p\n",&a);
	printf("&b=%p\n",&b);
	return 0;
}
