//��ͷ�ļ�����ͺ������������������
#include "swap.h"

//��������
void swap(int a, int b) {
	cout << "����ǰ��" << a << ' ' << b << endl;
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "������" << a << ' ' << b << endl;

}