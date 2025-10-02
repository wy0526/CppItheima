#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test()
{
	ifstream writeFile; //创建流对象
	writeFile.open("text.txt", ios::in); //打开文件

	if (!writeFile.is_open())
	{
		cout << "文件打开失败" << endl;
		return; //文件打开失败不需要继续执行，返回即可
	}

	//读取内容方式一：
	//char buf[1024] = { 0 };  //字符数组
	//while (writeFile >> buf)  //流操作符>>: 一行一行读取到字符数组中，读取结束返回false退出while循环
	//{
	//	cout << buf << endl; // C++可以用cout直接输出字符数组（因为字符之间地址连续），而不能输出整形数组（一个数字4字节，数字之间地址不连续）
	//}

	//读取内容方式二：
	//char buf[1024] = { 0 };   //字符数组
	//while (writeFile.getline(buf, sizeof(buf)))    //流函数getline()：一行一行读取到地址为buf的地址中，读取sizeof(buf)大小的内容，，读取结束返回false退出while循环
	//{
	//	cout << buf << endl;
	//}

	//读取内容方式三：
	//string buf;    //字符串
	//while (getline(writeFile, buf))     //全局函数getline():读取内容到字符串buf中（前提是需要添加string头文件）
	//{
	//	cout << buf << endl;     //cout可以直接输出字符串
	//}

	//读取内容方式四：
	char c;
	while ((c = writeFile.get()) != EOF)    //流函数get():读取一个字符并返回
	{
		cout << c;	
	}

	writeFile.close();
}


int main()
	
{
	test();
	return 0;
}