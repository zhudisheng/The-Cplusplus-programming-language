#ifndef _TEST_H_
#define _TEST_H_
typedef void Demo;
Demo* Demo_Create(int i,int j);
int Demo_GetI(Demo* pThis);
int Demo_GetJ(Demo* pThis);
int Demo_Add(Demo* pThis,int value);
void Demo_Free(Demo* pThiS);
#endif
