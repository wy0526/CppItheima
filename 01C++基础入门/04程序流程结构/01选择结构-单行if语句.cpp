#include <iostream>
using namespace std;

int main1(void) {

	int score = 0;
	cout << "请输入您的分数：";
	cin >> score;
	
	if (score > 600) {
		cout << "恭喜您考上一本大学！" << endl;
	}
	system("pause");
	return 0;
}