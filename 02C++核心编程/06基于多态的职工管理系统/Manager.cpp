#include <iostream>
using namespace std;
#include "Manager.h"
#include <string>

Manager::Manager(int mId, string mName, int dId)
{
	this->m_Id = mId;
	this->m_Name = mName;
	this->d_Id = dId;
}

void Manager::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t 职工姓名：" << this->m_Name
		<< "\t 岗位：" << this->getDeptName() << endl;
}

string Manager::getDeptName()
{
	return "经理";
}