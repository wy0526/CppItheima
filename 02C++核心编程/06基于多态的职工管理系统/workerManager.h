#pragma once  //��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;

#include "Worker.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();  //���캯��������������ʵ��

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//���ְ��
	void Add_Emp();

	//���浽�ļ�
	void Save();

	//��ȡְ������
	int Get_EmpNum();

	//��ʼ��ְ��
	void Init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ���������
	void Sort_Emp();

	//����ļ�
	void Clean_Emp();

	//��¼ְ������
	int m_EmpNum;

	//�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ְ������ָ��
	Worker** m_EmpArray;	

	~WorkerManager();
};