#include <stdio.h>

#define FUNC(a,b) ((a) < (b) ? (a):(b))
//__forceinline
//__attribute__((always_inline))
inline int  func(int a,int b)
{
	return a < b ? a : b;
}
int main(int argc,char *argv[])
{
	int a = 1;
	int b = 3;
	//int c = FUNC(++a,b);
	int c = func(++a,b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	return 0;
}
