#include <iostream>
using namespace std;

//引用和值传递使用方式一样，但是却是值传递的结果
//也就是引用的使用方式简单，但是却起到了指针的作用

void swap(int& a2, int& b2) {

	int temp = a2;
	a2 = b2;
	b2 = temp;
}

int main3(void) {

	int a = 5;
	int b = 6;

	cout << "a = " << a << ',' << "b = " << b << endl;


	swap(a, b); 

	cout << "a = " << a << ',' << "b = " << b << endl;

	system("pause");
	return 0;
}