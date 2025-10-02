#include <iostream>
using namespace std;

int main14(void) {

	for (int j = 1; j <= 10; j++) {
		for (int i = 1; i <= 10; i++) {
			//注意这里不能用单引号，因为是两个字符，所以是字符串，应该用双引号
			cout << "* "; 
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}