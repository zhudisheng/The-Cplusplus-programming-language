#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class People
{
	string m_name;
	int m_age;
public:
	People(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	void print()
	{
		cout << "Name = " << m_name << ","
		     << "Age = " << m_age << endl;
	}
};
class Teacher:virtual public People
{
public:
	Teacher(string name,int age):People(name,age)
	{
	}
};
class Student:virtual public People
{
public:
	Student(string name,int age):People(name,age)
	{
	}
};
class Doctor:public Teacher,public Student
{
public:	
	Doctor(string name,int age):Teacher(name,age),Student(name,age),People(name,age)
	{}
};
int main()
{
	Doctor d("zhuxinran",25);
	People p("zhuxinran",25);
	Teacher p1("zhuxinran",25);
	Student p2("zhuxinran",25);
	printf("sizeof(d) = %d\n",sizeof(d));
	printf("sizeof(p1) = %d\n",sizeof(p1));
	printf("sizeof(p2) = %d\n",sizeof(p2));
	printf("sizeof(p) = %d\n",sizeof(p));
	d.print();
	return 0;
}
