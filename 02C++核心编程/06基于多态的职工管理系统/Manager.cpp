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
	cout << "ְ����ţ�" << this->m_Id
		<< "\t ְ��������" << this->m_Name
		<< "\t ��λ��" << this->getDeptName() << endl;
}

string Manager::getDeptName()
{
	return "����";
}