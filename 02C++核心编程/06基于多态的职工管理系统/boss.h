#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Boss :public Worker
{
public:

	Boss(int mId, string mName, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};