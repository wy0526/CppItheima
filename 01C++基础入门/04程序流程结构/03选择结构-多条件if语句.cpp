#include <iostream>
using namespace std;

int main3(void) {

	int score = 0;
	cout << "请输入您的分数：";
	cin >> score;
	if (score >= 600) {
		cout << "恭喜您考上一本大学" << endl;
	}
	else if (score >= 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score >= 400) {
		cout << "恭喜您考上三本大学" << endl;
	}
	else {
		cout << "您未考上大学" << endl;
	}
	system("pause");
	return 0;
}