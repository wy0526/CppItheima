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
	cout << "ְ����ţ�" << this->m_Id
		<< "\t ְ��������" << this->m_Name
		<< "\t ��λ��" << this->getDeptName() << endl;
}

string Employee::getDeptName()
{
	return "Ա��";
}
