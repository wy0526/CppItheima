#include <iostream>
using namespace std;

int main2(void) {

	int a = 10;
	int a2 = 5;

	int& b = a;

	//int& b2;  ע������1�����ñ����ʼ��

	//int& b = a2;  ע������2�����ò��ܱ��޸�

	cout << b << endl;
	

	system("pause");
	return 0;
}