#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Manager:public Worker
{
public:
	
	Manager(int mId, string mName, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};