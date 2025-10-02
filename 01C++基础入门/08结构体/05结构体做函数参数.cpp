#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;
};

void func(struct student s) {
	cout << "值传递：" << endl;
	s.name = "艾米";
	s.age = 20;
	cout << "函数内：姓名：" << s.name << "；年龄：" << s.age << endl;
}

void func2(struct student* p) {
	cout << "地址传递：" << endl;
	p->name = "小明";
	p->age = 12;
	cout << "函数内：姓名：" << p->name << "；年龄：" << p->age << endl;
}

int main5(void) {

	struct student stu = { "丽丽", 15 };

	func(stu);
	cout << "函数外：姓名：" << stu.name << "；年龄：" << stu.age << endl;

	func2(&stu);
	cout << "函数外：姓名：" << stu.name << "；年龄：" << stu.age << endl;


	system("pause");
	return 0;
}