#include <iostream>
using namespace std;

class Person5 {
public:

	Person5() {
		cout << "构造函数：无参构造" << endl;
	}
	Person5(int a) {
		age = a;
		cout << "构造函数：有参构造" << endl;
	}
	Person5(Person5& p) {
		age = p.age;
		cout << "构造函数：拷贝构造" << endl;
	}
	~Person5() {
		cout << "析构函数" << endl;
	}
	int age;
};

int main5(void) {

	//1.括号法
	cout << "1.括号法" << endl;
	//调用无参构造
	//Person5 p;
	//调用有参构造
	Person5 p(10);
	//调用拷贝构造
	Person5 p2(p);
	cout << p2.age << endl;

	//2.显示法
	cout << endl;
	cout << "2.显示法" << endl;
	//调用有参构造
	//Person5 p3 = Person5(15);
	//调用拷贝构造
	//Person5 p4 = Person5(p2);
	//匿名对象
	Person5(20);

	//3.隐式转换法
	cout << endl;
	cout << "3.隐式转换法" << endl;
	//有参构造
	Person5 p5 = 20;
	//拷贝构造
	Person5 p6 = p5;

	system("pause");
	return 0;
}