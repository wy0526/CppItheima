#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;
};

void func(struct student s) {
	cout << "ֵ���ݣ�" << endl;
	s.name = "����";
	s.age = 20;
	cout << "�����ڣ�������" << s.name << "�����䣺" << s.age << endl;
}

void func2(struct student* p) {
	cout << "��ַ���ݣ�" << endl;
	p->name = "С��";
	p->age = 12;
	cout << "�����ڣ�������" << p->name << "�����䣺" << p->age << endl;
}

int main5(void) {

	struct student stu = { "����", 15 };

	func(stu);
	cout << "�����⣺������" << stu.name << "�����䣺" << stu.age << endl;

	func2(&stu);
	cout << "�����⣺������" << stu.name << "�����䣺" << stu.age << endl;


	system("pause");
	return 0;
}