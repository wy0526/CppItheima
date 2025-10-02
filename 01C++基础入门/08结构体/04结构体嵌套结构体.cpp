#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;
};
struct teacher {
	string name;
	int age;
	struct student stu;
};



int main4(void) {

	struct teacher t = { "王芳", 35, {"红红", 15} };

	struct teacher* p = &t;

	cout << p->name << "已经" << p->age << "岁了，她的学生是" << p->stu.name << endl;

	system("pause");
	return 0;
}