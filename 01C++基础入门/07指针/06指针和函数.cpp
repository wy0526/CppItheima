#include <iostream>
using namespace std;
void swap01(int a, int b);

void swap01(int num1, int num2) {
	cout << "进入值传递函数" << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "a = " << num1 << ';' << "b = " << num2 << endl;

}

void swap02(int* p1, int* p2) {
	cout << "进入地址传递函数" << endl;

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "a = " << *p1 << ';' << "b = " << *p2 << endl;
}

int main6(void) {

	int a = 5;
	int b = 10;

	swap01(a, b);

	cout << "a = " << a << ';' << "b = " << b << endl;

	swap02(&a, &b);

	cout << "a = " << a << ';' << "b = " << b << endl;



	system("pause");
	return 0;
}