#include <iostream>
using namespace std;

class Person
{
public:
	//类内声明
	static int m_A;
};
//类外初始化
int Person::m_A = 100;

void test09()
{
	Person p;
	cout << p.m_A << endl;

	//所有对象共享同一份数据
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;  //通过对象p访问m_A的结果是200

	//静态成员变量不只是可以通过对象访问，还可以通过类名::来访问
	cout << Person::m_A << endl;
}

int main09()
{ 
	test09();
	system("pause");
	return 0;
}