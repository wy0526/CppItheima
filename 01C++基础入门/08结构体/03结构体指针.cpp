#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;

};

int main3(void) {

	struct student stu = { "С��" , 15 };
	struct student* p = &stu;

	p->age = 20;

	cout << stu.name << "�������ǣ�" << stu.age << endl;

	system("pause");
	return 0;
}