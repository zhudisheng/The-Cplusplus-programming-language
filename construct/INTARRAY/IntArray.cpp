#include "IntArray.h"

IntArray::IntArray(int len)
{
	m_pointer = new int[len];
	for(int i = 0;i < len;i++)
	{
		m_pointer[i] = 0;
	}
	m_length = len;
}
IntArray::IntArray(const IntArray& obj)
{
	m_length = obj.m_length;
	m_pointer = new int[obj.m_length];	
	for(int i = 0;i < obj.m_length;i++)
	{
		m_pointer[i] = obj.m_pointer[i];
	}
}
int IntArray::length()
{
	return m_length;
}
bool IntArray::get(int index,int&value)
{
	bool ret = ((0 <= index)&&(index <= length()));
	if(ret)
	{
		value = m_pointer[index];
	}
	return ret;
}
bool IntArray::set(int index,int value)
{
	bool ret = ((0 <= index)&&(index <= length()));
	if(ret)
	{
		m_pointer[index] = value;
	}
	return ret;
} 
IntArray::~IntArray()
{
	delete []m_pointer;
}
