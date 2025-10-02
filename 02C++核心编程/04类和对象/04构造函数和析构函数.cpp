#include <iostream>
using namespace std;

class Person4 {
public:
	Person4() {
		cout << "构造函数" << endl;
	}
	~Person4() {
		cout << "析构函数" << endl;
	}
};

void test01() {
	Person4 p;
}

int main4(void) {

	test01();

	system("pause");
	return 0;
}