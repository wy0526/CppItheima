#include <iostream>
using namespace std;

class Person
{
public:
	//��ͳ��ʼ������
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//��ʼ���б��ʼ������
	//1.�����
	/*Person() :m_A(10), m_B(20), m_C(30)
	{

	}*/

	//2.���ķ�ʽ
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test08()
{
	//Person p(10, 20, 30);
	Person p(30, 20, 10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;

}


int main08(void) {

	test08();

	system("pause");
	return 0;
}