#ifndef _INTARRAY_H_
#define _INTARRAY_H_
class IntArray
{
private:
	int m_length;
	int *m_pointer;
public:
	IntArray(int len);
	IntArray(const IntArray& obj);
	~IntArray();
	int length();
	bool get(int index,int& value);
	bool set(int index,int value);
};
#endif
