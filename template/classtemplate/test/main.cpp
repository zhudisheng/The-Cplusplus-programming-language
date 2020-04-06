#include <iostream>
#include <string>
#include "Operator.h"
using namespace std;

int main()
{
	Operator<int> op1;
	cout << op1.add(1,2)<<endl;
	cout << op1.multiply(1,2)<<endl;
	cout << op1.minus(1,2)<<endl;
	cout << op1.divide(1,2)<<endl;

	return 0;
}
