#include <iostream>
using namespace std;

//���ú�ֵ����ʹ�÷�ʽһ��������ȴ��ֵ���ݵĽ��
//Ҳ�������õ�ʹ�÷�ʽ�򵥣�����ȴ����ָ�������

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