#include <iostream>
using namespace std;
#include "Worker.h"

class Employee :public Worker
{
public:

	Employee(int mId, string mName, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取部门名称
	virtual string getDeptName();
};