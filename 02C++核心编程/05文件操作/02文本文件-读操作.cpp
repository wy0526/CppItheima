#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test()
{
	ifstream writeFile; //����������
	writeFile.open("text.txt", ios::in); //���ļ�

	if (!writeFile.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return; //�ļ���ʧ�ܲ���Ҫ����ִ�У����ؼ���
	}

	//��ȡ���ݷ�ʽһ��
	//char buf[1024] = { 0 };  //�ַ�����
	//while (writeFile >> buf)  //��������>>: һ��һ�ж�ȡ���ַ������У���ȡ��������false�˳�whileѭ��
	//{
	//	cout << buf << endl; // C++������coutֱ������ַ����飨��Ϊ�ַ�֮���ַ������������������������飨һ������4�ֽڣ�����֮���ַ��������
	//}

	//��ȡ���ݷ�ʽ����
	//char buf[1024] = { 0 };   //�ַ�����
	//while (writeFile.getline(buf, sizeof(buf)))    //������getline()��һ��һ�ж�ȡ����ַΪbuf�ĵ�ַ�У���ȡsizeof(buf)��С�����ݣ�����ȡ��������false�˳�whileѭ��
	//{
	//	cout << buf << endl;
	//}

	//��ȡ���ݷ�ʽ����
	//string buf;    //�ַ���
	//while (getline(writeFile, buf))     //ȫ�ֺ���getline():��ȡ���ݵ��ַ���buf�У�ǰ������Ҫ���stringͷ�ļ���
	//{
	//	cout << buf << endl;     //cout����ֱ������ַ���
	//}

	//��ȡ���ݷ�ʽ�ģ�
	char c;
	while ((c = writeFile.get()) != EOF)    //������get():��ȡһ���ַ�������
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