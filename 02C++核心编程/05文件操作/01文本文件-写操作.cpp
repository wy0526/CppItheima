#include <iostream>
using namespace std;
#include <fstream>

void test()
{
	ofstream readFile;  //创建流对象
	readFile.open("text.txt", ios::out);  //打开文件
	readFile << "我是小明" << endl;  //写入文件
	readFile.close();   // 关闭文件
}

int main()
{
	test();
	return 0;
}