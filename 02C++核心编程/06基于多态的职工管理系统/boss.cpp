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
	cout << "ְ����ţ�" << this->m_Id
		<< "\t ְ��������" << this->m_Name
		<< "\t ��λ��" << this->getDeptName() << endl;
}

string Boss::getDeptName()
{
	return "�ϰ�";
}