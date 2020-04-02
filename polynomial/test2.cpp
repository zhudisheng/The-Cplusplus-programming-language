#include <iostream>
#include <string>

using namespace std;
class Boss
{
public:
	int fight()
	{
		int ret = 10;
		cout << "Boss::fight():" << ret << endl;
		return ret;
	}
};
class Master
{
public:
	virtual int eightSwordKill()
	{
		int ret = 8;
		cout << "Master::eightSwordKill():" << ret << endl;
		return ret;
	}
};
class NewMaster:public Master
{
public:
	int eightSwordKill()
	{
		int ret = Master::eightSwordKill()*2;
		cout << "NewMaster::eightSwordKill():" << ret << endl;
		return ret;
	}
};
void field_pk(Master *master,Boss *boss)
{
	int k = master->eightSwordKill();
	int b = boss->fight();
	if(k < b)
	{
		cout << "Master is killed..."<<endl;
	}
	else
	{
		cout << "Boss is killed..." << endl;
	}
}
int main()
{
	Master master;
	Boss boss;
	cout << "Master vs Boss" << endl;
	field_pk(&master,&boss);
	cout << "NewMaster vs Boss"<<endl;
	NewMaster newMaster;
	field_pk(&newMaster,&boss);
	return 0;
}

