#include <iostream>
using namespace std;

int main1(void) {
	short num1 = 10;
	//short num1 = 32768;   ������Χ����ӡ����� num1 = -32768 ����С������ʼ

	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	return 0;
}