#include <iostream>
using namespace std;

class Person5 {
public:

	Person5() {
		cout << "���캯�����޲ι���" << endl;
	}
	Person5(int a) {
		age = a;
		cout << "���캯�����вι���" << endl;
	}
	Person5(Person5& p) {
		age = p.age;
		cout << "���캯������������" << endl;
	}
	~Person5() {
		cout << "��������" << endl;
	}
	int age;
};

int main5(void) {

	//1.���ŷ�
	cout << "1.���ŷ�" << endl;
	//�����޲ι���
	//Person5 p;
	//�����вι���
	Person5 p(10);
	//���ÿ�������
	Person5 p2(p);
	cout << p2.age << endl;

	//2.��ʾ��
	cout << endl;
	cout << "2.��ʾ��" << endl;
	//�����вι���
	//Person5 p3 = Person5(15);
	//���ÿ�������
	//Person5 p4 = Person5(p2);
	//��������
	Person5(20);

	//3.��ʽת����
	cout << endl;
	cout << "3.��ʽת����" << endl;
	//�вι���
	Person5 p5 = 20;
	//��������
	Person5 p6 = p5;

	system("pause");
	return 0;
}