#include <iostream>
using namespace std;

class Person6 {
public:
	Person6() {
		cout << "�޲ι��캯��" << endl;
	}

	Person6(int a) {
		age = a;
		cout << "�вι��캯��" << endl;
	}

	Person6(const Person6 & p) {
		age = p.age;
		cout << "�������캯��" << endl;
	}

	~Person6() {
		cout << "��������" << endl;
	}
	
	int age;
};

//ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
void test6() {
	Person6 s(10);
	Person6 s2 = s;
}

//�����������������Ϊֵ����
void test2(Person6 p) {
	cout << "����������Person6���һ�����󣬴��ݷ�ʽΪֵ����" << endl;
}

//��������ֵ���������Ϊֵ����
Person6 test3() {
	Person6 p;
	return p;
}


int main6(void) {
	
	//test();

	//Person6 p(10);
	//test2(p);

	test3();


	system("pause");
	return 0;
}