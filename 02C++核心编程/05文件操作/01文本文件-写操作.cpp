#include <iostream>
using namespace std;
#include <fstream>

void test()
{
	ofstream readFile;  //����������
	readFile.open("text.txt", ios::out);  //���ļ�
	readFile << "����С��" << endl;  //д���ļ�
	readFile.close();   // �ر��ļ�
}

int main()
{
	test();
	return 0;
}