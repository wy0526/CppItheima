#include "workerManager.h"
#include <iostream>
using namespace std;

#include "Employee.h"
#include "Manager.h"
#include "boss.h"

WorkerManager::WorkerManager()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2.�ļ����ڣ�����¼Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		cout << "�ļ�Ϊ�գ�" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3.�ļ����ڣ���������
	int num = this->Get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݴ浽������
	this->Init_Emp();

	//���Դ���
	//for (int i = 0; i < m_EmpNum; i++)
	//{
	//	cout << "id:" << this->m_EmpArray[i]->m_Id << endl;
	//	cout << "name:" << this->m_EmpArray[i]->m_Name << endl;      //name����ģ����ı��ĵ������Ϊ��������һ�����룬�ĳ�ANSI�����棬�滻
	//	cout << "DeptId:" << this->m_EmpArray[i]->d_Id << endl;
	//}

	/*this->m_EmpNum = 0;
	this->m_EmpArray = NULL;*/
}

void WorkerManager::Show_Menu()
{
	cout << "*************************************" << endl;
	cout << "******** ��ӭʹ��ְ������ϵͳ *********" << endl;
	cout << "********** 0.�˳�������� ************" << endl;
	cout << "********** 1.����ְ����Ϣ ************" << endl;
	cout << "********** 2.��ʾְ����Ϣ ************" << endl;
	cout << "********** 3.ɾ����ְְ�� ************" << endl;
	cout << "********** 4.�޸�ְ����Ϣ ************" << endl;
	cout << "********** 5.����ְ����Ϣ ************" << endl;
	cout << "********** 6.���ձ������ ************" << endl;
	cout << "********** 7.��������ĵ� ************" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause"); //��Ļ��ʾ ��������˳�
	exit(0); // �˳�����
	
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����µ�����
		int newNum = this->m_EmpNum + addNum;
		
		Worker** newSpace = new Worker * [newNum];

		if (this->m_EmpNum != NULL)
		{
			//ѭ����ԭְ�����ݿ������¿ռ���
			for (int i = 0; i < m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}	
		}

		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << "��ְ�����" << endl;
			cin >> id;

			cout << "������� " << i + 1 << "��ְ������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1.��ְͨ����" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ壺" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, dSelect);
			case 2:
				worker = new Manager(id, name, dSelect);
			case 3:
				worker = new Boss(id, name, dSelect);
			default:
				break;
			}

			//
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//����ְ������
		this->m_EmpNum = newNum;

		this->Save();

		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "��ӳɹ�" << addNum << "����ְ��" << endl;
	}
	else
	{
		cout << "�������������" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " " 
			<< this->m_EmpArray[i]->m_Name << " " 
			<< this->m_EmpArray[i]->d_Id << endl;
	}

	ofs.close();
}

int WorkerManager::Get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)  //�����ɹ�����1������ʧ�ܷ���0
	{
		//ͳ����������
		num++;
		//cout << "[WorkerManager::Get_EmpNum()]:num = " << num << endl;
	}

	return num;
}

void WorkerManager::Init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if(dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else
		{
			worker = new Boss(id, name, dId);
		}

		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			/*cout << this->m_EmpArray[0]->m_Name << endl;
			cout << this->m_EmpArray[1]->m_Name << endl;

			cout << this->m_EmpArray[0]->d_Id << endl;
			cout << this->m_EmpArray[1]->d_Id << endl;*/

			this->m_EmpArray[i]->showInfo();   
		}
	}

	//��������˳�������
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		//cout << index << endl;

		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			//ͬ�����µ��ļ���
			this->Save();

			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newId;

			cout << "��������������" << endl;
			cin >> newName;

			cout << "�������¸�λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
				case1:
					worker = new Employee(newId, newName, dSelect);
					break;
				case2:
					worker = new Manager(newId, newName, dSelect);
					break;
				case3:
					worker = new Boss(newId, newName, dSelect);
					break;
				default:
					break;
			}
			//�������ݵ�������
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;

			this->Save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1.����ְ����Ų���" << endl; 
		cout << "2.����ְ����������" << endl;
	
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "������ְ�����" << endl;
			int id;
			cin >> id;

			int ret = IsExist(id);

			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ�û�иñ��ְ��" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "��������ҵ�������" << endl;

			string name;
			cin >> name;

			//�Ƿ���ҵ��ı�־
			bool flag = false;

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ������Ϊ" << this->m_EmpArray[i]->m_Id << "��ְ����Ϣ���£�" << endl;
					this->m_EmpArray[i]->showInfo();

					flag = true;
				}
			}

			if (flag == false)
			{
				cout << "����ʧ�ܣ�û�и�������ְ��" << endl;
			}
		}
		else
		{
			cout << "�������������" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1.��ְ�������������" << endl;
		cout << "2.��ְ����Ž�������" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; //���ֵ����Сֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
			
		}

		cout << "����ɹ�" << endl;

		this->Save();

		this->Show_Emp();
	}
}

void WorkerManager::Clean_Emp()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc); //ɾ���ļ����´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				
					delete this->m_EmpArray[i];
					this->m_EmpArray[i] = NULL;

			}

			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;

			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "��ճɹ�" << endl;

	}

	system("pause");
	system("cls");	
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}

		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}