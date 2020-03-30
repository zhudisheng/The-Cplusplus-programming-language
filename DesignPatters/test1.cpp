#include <stdio.h>

class TwoPhaseCons
{
private:
	TwoPhaseCons()
	{
	}
	bool construct()
	{
		return true;
	}
public:
	static TwoPhaseCons* NewInstance();
};
TwoPhaseCons* TwoPhaseCons::NewInstance()
{
	TwoPhaseCons* ret = new TwoPhaseCons();
	if(!(ret && ret->construct()))
	{
		delete ret;
		ret = NULL;
	}
	return ret;
}
int main()
{
	TwoPhaseCons* obj = TwoPhaseCons::NewInstance();
	printf("obj = %p\n",obj);
	delete obj;
	return 0;
}
