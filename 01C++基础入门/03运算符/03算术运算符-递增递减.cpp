#include <iostream>
using namespace std;

int main3(void) {
	int a = 100;
	int b = 100;
	a++;
	++b;
	cout << a << endl;  //101
	cout << b << endl;  //101

	int a2 = 10;
	int a3 = a2++ + 2;
	cout << a3 << endl; //12

	int b2 = 10;
	int b3 = ++b2 + 2;
	cout << b3 << endl; //13
	  
	system("pause");
	return 0;
}