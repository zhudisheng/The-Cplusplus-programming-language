#include <stdio.h>

int a = 1;
struct SV
{
	int &x;
	int &y;
	int &z;
};
int main()
{
	int b = 2;
	int *pc = new int [3];
	//int &array[] = {a,b,*pc};
	SV sv = {a,b,*pc};
	printf("&sv.x = %p\n",&sv.x);
	printf("&sv.y = %p\n",&sv.y);
	printf("&sv.z = %p\n",&sv.z);
	delete pc;
	return 0;
}
