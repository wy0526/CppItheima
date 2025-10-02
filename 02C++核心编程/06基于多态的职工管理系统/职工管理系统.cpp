#include "workerManager.h"
#include <iostream>
using namespace std;

#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include "boss.h"

int main()
{
	/*Worker * worker = (Worker*)new Employee(22, "lili", 1);
	worker->showInfo();

	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Boss(1, "����", 1);
	worker->showInfo();
	delete worker;*/

	WorkerManager wm;
	int choice;

	while (true)
	{
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;	

		switch (choice)
		{
		case 0:
			//�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1:
			//���ְ��
			wm.Add_Emp();
			break;
		case 2:
			//չʾ��Ϣ
			wm.Show_Emp();
			break;
		case 3:
			//ɾ��ְ��
			wm.Del_Emp();
		//���Դ���
		/*{
			int ret = wm.IsExist(1);
			if (ret != -1)
			{
				cout << "ְ������" << endl;
			}
			else
			{
				cout << "ְ��������" << endl;
			}
		}*/
			break;
		case 4:
			//�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:
			//����ְ��
			wm.Find_Emp();
			break;
		case 6:
			//����ְ��
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_Emp();
			break;
		default:
			system("cls"); //�����Ļ����ʾ����
			break;
		}
	}

	return 0;
}