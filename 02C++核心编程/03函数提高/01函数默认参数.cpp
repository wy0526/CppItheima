#include <iostream>
using namespace std;

int func(int a, int b , int c);     //���������ͺ�������ֻ����һ����Ĭ��ֵ�����ܶ���

int func(int a, int b = 2, int c = 3) { //��һ��Ĭ��ֵ���Ҳ�Ҳ������Ĭ��ֵ


	return a + b + c;
}

int main1(void) {

	cout << func(1) << endl;

	system("pause");
	return 0;
}