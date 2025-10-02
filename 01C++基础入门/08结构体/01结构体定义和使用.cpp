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
	s1.name = "李雷";
	s1.sex = '男';
	cout << "姓名：" << s1.name << "；年龄：" << s1.age << "；性别：" << s1.sex << endl;

	struct Student s2 = { "小樱" , 15 , '女' };
	cout << "姓名：" << s2.name << "；年龄：" << s2.age << "；性别：" << s2.sex << endl;


	s3.age = 15;
	s3.name = "鲍勃";
	s3.sex = '男';
	cout << "姓名：" << s3.name << "；年龄：" << s3.age << "；性别：" << s3.sex << endl;


	system("pause");
	return 0;
}