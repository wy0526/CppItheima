#include <iostream>
using namespace std;
#include "Worker.h"

class Employee :public Worker
{
public:

	Employee(int mId, string mName, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};