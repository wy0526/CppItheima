//将头文件代码和函数声明代码包含进来
#include "swap.h"

//函数定义
void swap(int a, int b) {
	cout << "交换前：" << a << ' ' << b << endl;
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "交换后：" << a << ' ' << b << endl;

}