#include <iostream>
using namespace std;

class Person {
public:
	static int m_A2;
	int m_B = 1;

	static void func() {
		//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		cout << m_A2 << endl;
		//cout << m_B << endl;
	}
};

int Person::m_A2 = 2;

void test092()
{
	Person p;
	p.func();

	//��̬��Ա������ֻ�ǿ���ͨ��������ʣ�������ͨ������::������
	Person::func();
}

int main092() {

	test092();
	system("pause");
	return 0;
}