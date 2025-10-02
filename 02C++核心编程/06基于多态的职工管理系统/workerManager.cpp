#include "workerManager.h"
#include <iostream>
using namespace std;

#include "Employee.h"
#include "Manager.h"
#include "boss.h"

WorkerManager::WorkerManager()
{
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2.文件存在，但记录为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文件为空
		cout << "文件为空！" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3.文件存在，且有数据
	int num = this->Get_EmpNum();
	//cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中的数据存到数组中
	this->Init_Emp();

	//测试代码
	//for (int i = 0; i < m_EmpNum; i++)
	//{
	//	cout << "id:" << this->m_EmpArray[i]->m_Id << endl;
	//	cout << "name:" << this->m_EmpArray[i]->m_Name << endl;      //name乱码的：打开文本文档，另存为，下面有一个编码，改成ANSI，保存，替换
	//	cout << "DeptId:" << this->m_EmpArray[i]->d_Id << endl;
	//}

	/*this->m_EmpNum = 0;
	this->m_EmpArray = NULL;*/
}

void WorkerManager::Show_Menu()
{
	cout << "*************************************" << endl;
	cout << "******** 欢迎使用职工管理系统 *********" << endl;
	cout << "********** 0.退出管理程序 ************" << endl;
	cout << "********** 1.增加职工信息 ************" << endl;
	cout << "********** 2.显示职工信息 ************" << endl;
	cout << "********** 3.删除离职职工 ************" << endl;
	cout << "********** 4.修改职工信息 ************" << endl;
	cout << "********** 5.查找职工信息 ************" << endl;
	cout << "********** 6.按照编号排序 ************" << endl;
	cout << "********** 7.清空所有文档 ************" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause"); //屏幕提示 按任意键退出
	exit(0); // 退出窗口
	
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新的人数
		int newNum = this->m_EmpNum + addNum;
		
		Worker** newSpace = new Worker * [newNum];

		if (this->m_EmpNum != NULL)
		{
			//循环将原职工数据拷贝到新空间下
			for (int i = 0; i < m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}	
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << "个职工编号" << endl;
			cin >> id;

			cout << "请输入第 " << i + 1 << "个职工姓名" << endl;
			cin >> name;

			cout << "请选择该职工岗位：" << endl;
			cout << "1.普通职工：" << endl;
			cout << "2.经理：" << endl;
			cout << "3.老板：" << endl;
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

		//释放原有空间
		delete[] this->m_EmpArray;

		//更新新空间的指向
		this->m_EmpArray = newSpace;

		//更新职工人数
		this->m_EmpNum = newNum;

		this->Save();

		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "添加成功" << addNum << "名新职工" << endl;
	}
	else
	{
		cout << "输入的数据有误" << endl;
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

	while (ifs >> id && ifs >> name && ifs >> dId)  //读出成功返回1，读出失败返回0
	{
		//统计人数变量
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
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态调用程序接口
			/*cout << this->m_EmpArray[0]->m_Name << endl;
			cout << this->m_EmpArray[1]->m_Name << endl;

			cout << this->m_EmpArray[0]->d_Id << endl;
			cout << this->m_EmpArray[1]->d_Id << endl;*/

			this->m_EmpArray[i]->showInfo();   
		}
	}

	//按任意键退出、清屏
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		//按照职工编号删除
		cout << "请输入想要删除的职工编号：" << endl;
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
			//同步更新到文件中
			this->Save();

			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
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
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号：" << endl;
		
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到" << id << "号职工，请输入新的职工号：" << endl;
			cin >> newId;

			cout << "请输入新姓名：" << endl;
			cin >> newName;

			cout << "请输入新岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			//更新数据到数组中
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << endl;

			this->Save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1.按照职工编号查找" << endl; 
		cout << "2.按照职工姓名查找" << endl;
	
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "请输入职工编号" << endl;
			int id;
			cin >> id;

			int ret = IsExist(id);

			if (ret != -1)
			{
				cout << "查找成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，没有该编号职工" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "请输入查找的姓名：" << endl;

			string name;
			cin >> name;

			//是否查找到的标志
			bool flag = false;

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，编号为" << this->m_EmpArray[i]->m_Id << "的职工信息如下：" << endl;
					this->m_EmpArray[i]->showInfo();

					flag = true;
				}
			}

			if (flag == false)
			{
				cout << "查找失败，没有该姓名的职工" << endl;
			}
		}
		else
		{
			cout << "输入的内容有误" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1.按职工编号升序排序" << endl;
		cout << "2.按职工编号降序排序" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; //最大值或最小值下标
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

		cout << "排序成功" << endl;

		this->Save();

		this->Show_Emp();
	}
}

void WorkerManager::Clean_Emp()
{
	cout << "确定清空？" << endl;
	cout << "1.确定" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc); //删除文件重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				
					delete this->m_EmpArray[i];
					this->m_EmpArray[i] = NULL;

			}

			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;

			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;

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