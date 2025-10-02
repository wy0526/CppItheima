#include <iostream>
using namespace std;

int main4(void) {

	int a = 5;
	int b = 10;

	//常量指针
	//指针指向可以改变，指针指向的值不可以改变
	const int * p = &a;
	p = &b;     //正确
	//*p = 2;   //错误

	//指针常量
	//指针指向不可以改变，指针指向的值可以改变
	int* const p2 = &a;
	//p2 = &b;  //错误
	*p2 = 4;    //正确

	//const既修饰指针，又修饰变量
	//指针指向、指针指向的值都不可以改变
	const int* const p3 = &a;
	//p3 = &b;    错误
	//*p3 = 8;    错误

	system("pause");
	return 0;
}