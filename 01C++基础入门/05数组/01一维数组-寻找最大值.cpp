#include <iostream>
using namespace std;

int main1(void) {

	int weight[5] = { 300, 350, 200 ,400, 250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (weight[i] > max) {
			max = weight[i];
		}
	}
	cout << "最重的小猪体重是：" << max << endl;
	system("pause");
	return 0;
}