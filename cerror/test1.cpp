#include <iostream>
#include <string>

using namespace std;
#define SUCCESS 	   0
#define INVALID_POINTER   -1
#define INVALID_LENGTH    -2
#define INVALID_PARAMETER -3
int MemSet(void *dest,unsigned int length,unsigned char v)
{
	if(dest == NULL)
	{
		return INVALID_POINTER;
	}
	if(length < 4)
	{
		return INVALID_LENGTH;
	}
	if((v<0)||(v>9))
	{
		return INVALID_PARAMETER; 
	}
	unsigned char*p = (unsigned char*)dest;
	for(int i=0;i<length;i++)
	{
		p[i] = v;
	}
	return SUCCESS;
}
int main(int argc,char *argv[])
{
	int ai[5];
	int ret = MemSet(ai,sizeof(ai),0);
	if(ret == SUCCESS)
	{
	}
	else if(ret == INVALID_POINTER)
	{
	}
	else if(ret == INVALID_LENGTH)
	{
	}
	else if(ret == INVALID_PARAMETER)
	{
	}
	return ret;
}
