#include "IntArray.h"

IntArray::IntArray(int len)
{
	m_length = len;
}
bool IntArray::construct()
{
	bool ret = true;
	m_pointer = new int[m_length];
	if(m_pointer)
	{
		for(int i = 0;i < m_length;i++)
		{
			m_pointer[i] = 0;
		}
	}
	else
	{
		ret = false;
	}
	return ret;
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
int& IntArray::operator[](int index)
{
	return m_pointer[index];
}
int IntArray::length()
{
	return m_length;
}
IntArray* IntArray::NewInstance(int length)
{
	IntArray* ret = new IntArray(length);
	if(!(ret && ret->construct()))	
	{
		delete ret;
		ret = 0;
	}
	return ret;
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
IntArray& IntArray:: self()
{
	return *this;
}
IntArray::~IntArray()
{
	delete []m_pointer;
}
