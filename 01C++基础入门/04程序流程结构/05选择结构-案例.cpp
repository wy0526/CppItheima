#include <iostream>
using namespace std;

int main5(void) {
	float w1 = 0.0f;
	float w2 = 0.0f;
	float w3 = 0.0f;

	cout << "�������һֻС������أ�";
	cin >> w1;

	cout << "������ڶ�ֻС������أ�";
	cin >> w2;

	cout << "���������ֻС������أ�";
	cin >> w3;

	if (w1 > w2) {
		if (w1 > w3) {
			cout << "��һֻС�����أ����������ǣ�" << w1 << endl;
		}
		else {
			cout << "����ֻС�����أ����������ǣ�" << w3 << endl;
		}
	}
	else if (w2 > w3) {
		cout << "�ڶ�ֻС�����أ����������ǣ�" << w2 << endl;
	}
	else {
		cout << "����ֻС�����أ����������ǣ�" << w3 << endl;
	}

	system("pause");
	return 0;
}