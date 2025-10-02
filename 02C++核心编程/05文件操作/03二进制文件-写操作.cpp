#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test()
{
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);

	Person p = { "lili", 14 };
	ofs.write((const char*)&p, sizeof(p));

	ofs.close();
}

int main()
{
	test();
	return 0;
}