#include <iostream>
using namespace std;
#include <string>

int main(void) {

	//����
	int i = 0;
	cout << "���������ͣ�";
	cin >> i;
	cout << "i��ֵΪ��" << i << endl;
	//������
	float f = 0.0f;
	cout << "�����븡���ͣ�";
	cin >> f;
	cout << "f��ֵΪ��" << f << endl;
	//�ַ���
	char c = 'a';
	cout << "�������ַ��ͣ�";
	cin >> c;
	cout << "c��ֵΪ��" << c << endl;
	//�ַ�����
	string s = "aaa";
	cout << "�������ַ�����";
	cin >> s;
	cout << "s��ֵΪ��" << s << endl;
	//������
	bool flag = true;
	cout << "�����벼��ֵ��";
	cin >> flag;
	cout << "flag��ֵΪ��" << flag << endl;
	system("pause");
	return 0;
}