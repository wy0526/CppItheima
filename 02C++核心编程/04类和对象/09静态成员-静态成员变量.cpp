#include <iostream>
using namespace std;

class Person
{
public:
	//��������
	static int m_A;
};
//�����ʼ��
int Person::m_A = 100;

void test09()
{
	Person p;
	cout << p.m_A << endl;

	//���ж�����ͬһ������
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;  //ͨ������p����m_A�Ľ����200

	//��̬��Ա������ֻ�ǿ���ͨ��������ʣ�������ͨ������::������
	cout << Person::m_A << endl;
}

int main09()
{ 
	test09();
	system("pause");
	return 0;
}