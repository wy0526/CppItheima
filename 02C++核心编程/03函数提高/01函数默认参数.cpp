#include <iostream>
using namespace std;

int func(int a, int b , int c);     //函数声明和函数定义只能有一个有默认值，不能都有

int func(int a, int b = 2, int c = 3) { //第一个默认值的右侧也都得有默认值


	return a + b + c;
}

int main1(void) {

	cout << func(1) << endl;

	system("pause");
	return 0;
}