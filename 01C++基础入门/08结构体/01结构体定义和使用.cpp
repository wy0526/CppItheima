#include <iostream>
using namespace std;
#include <string.h>

struct Student {
	string name;
	int age;
	char sex;
}s3;

int main1(void) {

	struct Student s1;
	s1.age = 15;
	s1.name = "����";
	s1.sex = '��';
	cout << "������" << s1.name << "�����䣺" << s1.age << "���Ա�" << s1.sex << endl;

	struct Student s2 = { "Сӣ" , 15 , 'Ů' };
	cout << "������" << s2.name << "�����䣺" << s2.age << "���Ա�" << s2.sex << endl;


	s3.age = 15;
	s3.name = "����";
	s3.sex = '��';
	cout << "������" << s3.name << "�����䣺" << s3.age << "���Ա�" << s3.sex << endl;


	system("pause");
	return 0;
}