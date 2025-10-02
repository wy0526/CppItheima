#include <iostream>
using namespace std;

class Person {
public:
	static int m_A2;
	int m_B = 1;

	static void func() {
		//静态成员函数只能访问静态成员变量
		cout << m_A2 << endl;
		//cout << m_B << endl;
	}
};

int Person::m_A2 = 2;

void test092()
{
	Person p;
	p.func();

	//静态成员函数不只是可以通过对象访问，还可以通过类名::来访问
	Person::func();
}

int main092() {

	test092();
	system("pause");
	return 0;
}