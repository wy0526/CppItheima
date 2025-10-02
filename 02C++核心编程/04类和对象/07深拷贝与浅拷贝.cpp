#include <iostream>
using namespace std;

class Person {
public:
	int m_Age;
	int* m_Height;

	Person() {
		cout << "无参构造函数" << endl;
	}

	Person(int a, int h) {
		cout << "有参构造函数" << endl;
		m_Age = a;
		m_Height = new int(h);
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);
		cout << "拷贝构造函数" << endl;
	}

	~Person() {
		cout << "析构函数" << endl;
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