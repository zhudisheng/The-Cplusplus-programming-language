#include <iostream>
#include <string>

using namespace std;

class SObject
{
	static SObject* c_instance;
	SObject(const SObject&);
	SObject& operator= (const SObject&);
	SObject()
	{
	}
public:
	static SObject* GetInstance();
	void print()
	{
		cout << "this = "<<this<<endl;
	}
};
SObject* SObject::c_instance = NULL;
SObject* SObject::GetInstance()
{
	if(c_instance == NULL)
	{
		c_instance = new SObject();
	}
	return c_instance;
}
int main()
{
	SObject* s = SObject::GetInstance();
	SObject* s1 = SObject::GetInstance();
	SObject* s2 = SObject::GetInstance();
	s->print();
	s1->print();
	s2->print();
	return 0;
}
