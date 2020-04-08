#include <iostream>
#include <string>

using namespace std;

class Test
{
	int m_value;
	int* const m_pCount;
	mutable int m_Count;
public:
	Test(int value = 0):m_pCount(new int(0))
	{
		m_value = value;
	}
	int getValue()const
	{
		*m_pCount = *m_pCount+1;
		return m_value;
	}
	void setValue(int value)
	{
		*m_pCount = *m_pCount+1;
		m_value = m_value;
	}
	int getCount()const
	{
		return *m_pCount;
	}
	~Test()
	{
		delete  m_pCount;
	}
};
int main(int argc,char *argv[])
{
	Test t;
	t.setValue(100);
	cout << "t.m_value = " << t.getValue() << endl;
	cout << "t.m_count = " << t.getCount() << endl;
	const Test ct(200);
	cout << "ct.m_value = " << ct.getValue() << endl;
	cout << "ct.m_count = " << ct.getCount() << endl;
	return 0;
}
