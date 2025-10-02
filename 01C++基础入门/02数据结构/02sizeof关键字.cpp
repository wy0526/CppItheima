#include <iostream>
using namespace std;

int main2(void) {
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "num1的大小:" << sizeof(num1) << endl;
	cout << "short的大小:" << sizeof(short) << endl;
	cout << "num2的大小:" << sizeof(num2) << endl;
	cout << "num3的大小:" << sizeof(num3) << endl;
	cout << "num4的大小:" << sizeof(num4) << endl;
	return 0;
}