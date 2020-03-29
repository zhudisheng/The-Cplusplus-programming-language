#include <stdio.h>

void static_cast_demo()
{
	int i = 0x12345;
	char c = 'c';
	int *pi = &i;
	char *pc = &c;
	
	c = static_cast<char>(i);
	//pc = static_cast<char*>(pi);
}
void const_cast_demo()
{
	const int& j = 1;
	int& k = const_cast<int&>(j);
	
	const int x = 2;
	int& y = const_cast<int&>(x);

	//int z = const_cast<int>(x); 
	k = 5;

	printf("k=%d\n",k);
	printf("j=%d\n",j);

	y = 8;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("&x = %p\n",&x);
	printf("&y = %p\n",&y);
}
void reinterpret_cast_demo()
{
	int i = 0;
	char c = 'c';
	int *pi = &i;
	char *pc = &c;

	pc = reinterpret_cast<char*>(pi);
	pi = reinterpret_cast<int*>(pc);
	pi = reinterpret_cast<int*>(i);
	//c = reinterpret_cast<char>(i);
}
void dynamic_cast_demo()
{
	int i = 0;
	int *pi = &i;
	//char *pc = dynamic_cast<char*>(pi);
}
int main()
{
	static_cast_demo();
	const_cast_demo();
	reinterpret_cast_demo();
	dynamic_cast_demo();
	return 0;
}
