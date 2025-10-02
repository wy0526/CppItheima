#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>

void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}

void test01()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << " b = " << b << endl;;

	//自动类型推导
	mySwap(a, b);
	cout << "a = " << a << " b = " << b << endl;

	//显示指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;

}

int main()
{
	test01();
	return 0;
}