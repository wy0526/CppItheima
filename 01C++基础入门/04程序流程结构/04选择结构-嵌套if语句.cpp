#include <iostream>
using namespace std;

int main4(void) {

	int score = 0;
	cout << "请您输入分数：";
	cin >> score;
	if (score >= 600) {
		if (score >= 700) {
			cout << "恭喜您考上北京大学" << endl;
		}
		else if (score >= 650) {
			cout << "恭喜您考上清华大学" << endl;
		}
		else {
			cout << "恭喜您考上人民大学" << endl;
		}
	}
	else if (score >= 500) {
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score >= 400) {
		cout << "恭喜您考上三本大学" << endl;
	}
	else {
		cout << "您未考上大学，请再接再厉！" << endl;
	}
	system("pause");
	return 0;
}