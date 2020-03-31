
#include <iostream>
#include <string>
#include "IntArray.h"
using namespace std;

int main()
{
	/*
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
	IntArray b = a;	
	for(int i = 0;i < b.length();i++)
	{
		int value = 0;
		if(b.get(i,value))
		{
			printf("b[%d] = %d\n",i,value);
		}
	
	}
	IntArray* a = IntArray::NewInstance(5);
	printf("a.length = %d\n",a->length());
	a->set(0,1);
	for(int i = 0;i < a->length();i++)
	{
		int v = 0;
		a->get(i,v);
		printf("a[%d] = %d\n",i,v);
	}
	*/
	/*
	IntArray *a = IntArray::NewInstance(5);
	if(a != NULL)
	{
		IntArray& array = a->self();
		cout << "array.length() = " << array.length() << endl;
		array[0] = 1;
		for(int i = 0;i < array.length();i++)
		{
			cout << array[i] << endl;
		}
	
	}
	delete a;
	*/
	IntArray *a = IntArray::NewInstance(5);
	IntArray *b = IntArray::NewInstance(10);
	if(a&&b)
	{
		IntArray& array = a->self();
		IntArray& brray = b->self();
		
		cout << "array.length() = " << array.length() << endl;
		cout << "brrray.length() = " << brray.length() << endl;
		
		array = brray;
		cout << "array.length() = " << array.length() << endl;
		cout << "brrray.length() = " << brray.length() << endl;

	
	}
	delete a;
	delete b;
	return 0;
}
