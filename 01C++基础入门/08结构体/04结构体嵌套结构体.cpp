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

	struct teacher t = { "����", 35, {"���", 15} };

	struct teacher* p = &t;

	cout << p->name << "�Ѿ�" << p->age << "���ˣ�����ѧ����" << p->stu.name << endl;

	system("pause");
	return 0;
}