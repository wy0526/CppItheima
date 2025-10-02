#include <iostream>
using namespace std;
#include <string.h>

struct hero {
	string name;
	int age;
	string sex;
};

void bubbleSort(struct hero * hero, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (hero[j].age > hero[j + 1].age) {
				int temp = hero[j].age;
				hero[j].age = hero[j + 1].age;
				hero[j + 1].age = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << hero[i].age << ' ';
	}
	cout << endl;

}

int main(void) {
	struct hero h[] = {
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};

	int len = sizeof(h) / sizeof(h[0]);
	cout << len << endl;

	for (int i = 0; i < 5; i++) {
		cout << h[i].age << ' ';
	}
	cout << endl;

	bubbleSort(h, len);


	system("pause");
	return 0;
}