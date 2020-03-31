#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	printf("Hello world!\n");
	char *p = (char*)malloc(sizeof(16));
	strcpy(p,"D.T.Software");
	double a = 3;
	double b = 4;
	double c = sqrt(a*a+b*b);
	printf("c = %f\n",c);
	free(p);
	return 0;
}
