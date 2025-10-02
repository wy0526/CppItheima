#include <iostream>
using namespace std;

int main2(void) {

	int a = 10;
	int a2 = 5;

	int& b = a;

	//int& b2;  注意事项1：引用必须初始化

	//int& b = a2;  注意事项2：引用不能被修改

	cout << b << endl;
	

	system("pause");
	return 0;
}