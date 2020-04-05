#include <stdio.h>
#include "test.h"

int main()
{
	Demo* d = Demo_Create(1,2);
	printf("d.mi = %d\n",Demo_GetI(d));
	printf("d.mj = %d\n",Demo_GetJ(d));
	printf("Add(3) = %d\n",Demo_Add(d,3));
	Demo_Free(d);
}
