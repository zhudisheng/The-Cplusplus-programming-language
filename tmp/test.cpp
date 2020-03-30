#include <stdio.h>

class Test{
	int mi;
	void init(int i)
	{
		mi = i;
	}
public:
	Test(int i){
		printf("Test(int i)\n");
		init(i);
	}
	Test(){
		printf("Test()\n");
		init(0);
	}
	~Test(){
		printf("~Test()\n");
	}
	
	void print(){
		printf("mi = %d\n",mi);
	}
	
};
int main()
{
	printf("main begin\n");
	Test();
	Test().print();
	Test(10).print();
	printf("main end\n");
	return 0;
}
