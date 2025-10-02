#include <iostream>
using namespace std;
#include "Employee.h"
#include "Worker.h"


Employee::Employee(int mId, string mName, int dId)
{
	this->m_Id = mId;
	this->m_Name = mName;
	this->d_Id = dId;
}

void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t 职工姓名：" << this->m_Name
		<< "\t 岗位：" << this->getDeptName() << endl;
}

string Employee::getDeptName()
{
	return "员工";
}
