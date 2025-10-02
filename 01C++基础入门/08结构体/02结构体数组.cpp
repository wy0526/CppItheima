#include <iostream>
using namespace std;
#include <string.h>

struct student {
	string name;
	int age;
};


int main2(void) {

	struct student sArr[2] = {
		{"黎明", 16},
		{"赵六", 15}
	};

	sArr[0].age = 15;

	for (int i = 0; i < 2; i++) {
		cout << sArr[i].name << "的年龄是：" << sArr[i].age << endl;
	}

	system("pause");
	return 0;
}