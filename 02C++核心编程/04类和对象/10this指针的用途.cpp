#include <iostream>
using namespace std;

class Person
{
public:

	int m_Age;

	Person(int age)
	{

		//m_Age = age;
		//this�Ǹ�ָ����øú����Ķ����ָ��
		this->m_Age = age;
	}

	void ageAdd(Person p)
	{
		this->m_Age += p.m_Age;
	}
};
void test10()
{
	Person p(12);
	cout << "p�����䣺" << p.m_Age << endl;

	Person p2(1);
	p.ageAdd(p2);
	cout << "p��p2������䣺" << p.m_Age << endl;

}

int main10()
{
	test10();
	system("pause");
	return 0;
}