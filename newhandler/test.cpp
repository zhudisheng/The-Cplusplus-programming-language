#include <iostream>
#include <new>
#include <cstdlib>
#include <exception>

using namespace std;

class Test
{
	int m_value;
public:
	Test()
	{
		cout << "Test()" << endl;
		m_value = 0;
	}
	~Test()
	{
		cout << "~Test()"<<endl;
	}
	void* operator new (unsigned int size)throw()
	{
		cout << "operator new :" << size << endl;
		return NULL;
	}
	void operator delete(void *p)
	{
		cout << "operator delete:"<<p<<endl;
		free(p);
	}
	void* operator new[] (unsigned int size)throw()
	{
		cout << "operator new[]:"<<size<<endl;
		return NULL;
	}
	void operator delete[](void *p)
	{
		cout << "operator delete[]:"<< p << endl;
		free(p);
	}
};
void my_new_handler()
{
	cout << "vod my_new_handler()"<<endl;
}
void ex_func_1()
{
	new_handler func = set_new_handler(my_new_handler);
	try
	{
		cout << "func = " << func << endl;
		if(func)
		{
			func();
		}
	}
	catch(const bad_alloc&)
	{
		cout << "catch(const bad_alloc&)"<<endl;
	}
}
void ex_func_2()
{
	Test *pt = new Test();
	cout << "pt =" << pt << endl;
	delete pt;
	pt = new Test[5];
	cout << "pt = " << pt << endl;
	delete []pt;
}
void ex_func_3()
{
	int *p = new(nothrow)int[10];
	delete []p;	
	int bb[2] = {0};
	struct ST
	{
		int x;
		int y;
	};
	ST* pt = new(bb) ST();
	pt->x = 1;
	pt->y = 2;
	cout << bb[0]<<endl;
	cout << bb[1]<<endl;
	pt->~ST();
}
int main(int argc,char *argv)
{
	
	return 0;
}
