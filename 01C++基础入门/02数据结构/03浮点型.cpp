#include <iostream>
using namespace std;

int main3(void) {
	//float和double
	float num1 = 3.1415926f;
	double num2 = 3.1415926;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	//求字节大小
	cout << "float的大小:" << sizeof(float) << endl;
	cout << "double的大小:" << sizeof(double) << endl;
	//科学计数法
	float f1 = 3e2;
	float f2 = 314e-2;
	cout << "f1:" << f1 << endl;
	cout << "f2:" << f2 << endl;
	return 0;
}