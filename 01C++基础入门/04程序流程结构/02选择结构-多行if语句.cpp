#include <iostream>
using namespace std;

int main2(void) {

	int score = 0;
	cout << "请您输入分数：";
	cin >> score;
	if (score >= 600) {
		cout << "恭喜您考上一本大学！" << endl;
	}
	else {
		cout << "您没有考上一本大学！" << endl;
	}

	system("pause");
	return 0;
}