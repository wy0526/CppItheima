#include <iostream>
using namespace std;
#include <string.h>

class Student {

public:

	string m_name;
	int m_id;

	void setName(string name) {
		m_name = name;
	}

	void setId(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "������" << m_name << ";ѧ�ţ�" << m_id << endl;
	}
};

int main1(void) {
	Student s1;
	s1.setName("Lili");
	s1.setId(20182713);
	s1.showStudent();

	system("pause");
	return 0;
}