#include <iostream>
using namespace std;

class Person {
public:
	int m_Age;
	int* m_Height;

	Person() {
		cout << "�޲ι��캯��" << endl;
	}

	Person(int a, int h) {
		cout << "�вι��캯��" << endl;
		m_Age = a;
		m_Height = new int(h);
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);
		cout << "�������캯��" << endl;
	}

	~Person() {
		cout << "��������" << endl;
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
	}
};

void test() {
	Person p(15, 183);
	Person p2(p);
}

int main07(void) {

	test();

	system("pause");
	return 0;
}