#include <iostream>
using namespace std;

class Person6 {
public:
	Person6() {
		cout << "无参构造函数" << endl;
	}

	Person6(int a) {
		age = a;
		cout << "有参构造函数" << endl;
	}

	Person6(const Person6 & p) {
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}

	~Person6() {
		cout << "析构函数" << endl;
	}
	
	int age;
};

//使用一个已经创建完毕的对象来初始化另一个对象
void test6() {
	Person6 s(10);
	Person6 s2 = s;
}

//函数参数是类对象，且为值传递
void test2(Person6 p) {
	cout << "函数参数是Person6类的一个对象，传递方式为值传递" << endl;
}

//函数返回值是类对象，且为值传递
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