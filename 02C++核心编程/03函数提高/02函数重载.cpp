#include <iostream>
using namespace std;

void func(int a) {
	cout << "func(int a)" << endl;
}

// 错误，无法重载按返回类型区分的函数
// int func(int a) {
//	cout << "func(int a)" << endl;
//	return a;
//} 

int main(void) {

	int a = 10;

	func(a);

	system("pause");
	return 0;
}