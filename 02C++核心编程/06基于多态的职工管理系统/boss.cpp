#include <iostream>
using namespace std;
#include "boss.h"
#include <string>

Boss::Boss(int mId, string mName, int dId)
{
	this->m_Id = mId;
	this->m_Name = mName;
	this->d_Id = dId;
}

void Boss::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t 职工姓名：" << this->m_Name
		<< "\t 岗位：" << this->getDeptName() << endl;
}

string Boss::getDeptName()
{
	return "老板";
}