#include <stdio.h>
#include "IntArray.h"

int main()
{
	IntArray a(5);
	for(int i = 0;i < a.length();i++)
	{
		a.set(i,i+1);
	}
	for(int i = 0;i < a.length();i++)
	{
		int value = 0;
		if(a.get(i,value))
		{
			printf("a[%d] = %d\n",i,value);
		}
	}
	return 0;
}
