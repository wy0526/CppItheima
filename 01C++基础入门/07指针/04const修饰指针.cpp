#include <iostream>
using namespace std;

int main4(void) {

	int a = 5;
	int b = 10;

	//����ָ��
	//ָ��ָ����Ըı䣬ָ��ָ���ֵ�����Ըı�
	const int * p = &a;
	p = &b;     //��ȷ
	//*p = 2;   //����

	//ָ�볣��
	//ָ��ָ�򲻿��Ըı䣬ָ��ָ���ֵ���Ըı�
	int* const p2 = &a;
	//p2 = &b;  //����
	*p2 = 4;    //��ȷ

	//const������ָ�룬�����α���
	//ָ��ָ��ָ��ָ���ֵ�������Ըı�
	const int* const p3 = &a;
	//p3 = &b;    ����
	//*p3 = 8;    ����

	system("pause");
	return 0;
}