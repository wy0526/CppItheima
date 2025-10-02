#include <iostream>
using namespace std;
#define Day 7

int main4(void) {

	//Day = 8；不能被修改宏常量，如果修改会报错
	cout << "一周有" << Day << "天" << endl;

	const int day = 7;
	//day = 8; 不能修改const常量，如果修改会报错
	cout << "一周有" << day << "天";
 	
	return 0;
}