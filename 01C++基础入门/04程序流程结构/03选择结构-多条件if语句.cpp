#include <iostream>
using namespace std;

int main3(void) {

	int score = 0;
	cout << "���������ķ�����";
	cin >> score;
	if (score >= 600) {
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else if (score >= 500)
	{
		cout << "��ϲ�����϶�����ѧ" << endl;
	}
	else if (score >= 400) {
		cout << "��ϲ������������ѧ" << endl;
	}
	else {
		cout << "��δ���ϴ�ѧ" << endl;
	}
	system("pause");
	return 0;
}