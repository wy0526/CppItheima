#include <iostream>
using namespace std;

int main4(void) {

	int score = 0;
	cout << "�������������";
	cin >> score;
	if (score >= 600) {
		if (score >= 700) {
			cout << "��ϲ�����ϱ�����ѧ" << endl;
		}
		else if (score >= 650) {
			cout << "��ϲ�������廪��ѧ" << endl;
		}
		else {
			cout << "��ϲ�����������ѧ" << endl;
		}
	}
	else if (score >= 500) {
		cout << "��ϲ�����϶�����ѧ" << endl;
	}
	else if (score >= 400) {
		cout << "��ϲ������������ѧ" << endl;
	}
	else {
		cout << "��δ���ϴ�ѧ�����ٽ�������" << endl;
	}
	system("pause");
	return 0;
}