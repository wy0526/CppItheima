#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;

};

int main3(void) {

	struct student stu = { "小芳" , 15 };
	struct student* p = &stu;

	p->age = 20;

	cout << stu.name << "的年龄是：" << stu.age << endl;

	system("pause");
	return 0;
}