#include <iostream>
using namespace std;

void func(int a) {
	cout << "func(int a)" << endl;
}

// �����޷����ذ������������ֵĺ���
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