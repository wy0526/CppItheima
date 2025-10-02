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
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Boss(1, "张三", 1);
	worker->showInfo();
	delete worker;*/

	WorkerManager wm;
	int choice;

	while (true)
	{
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;	

		switch (choice)
		{
		case 0:
			//退出系统
			wm.ExitSystem();
			break;
		case 1:
			//添加职工
			wm.Add_Emp();
			break;
		case 2:
			//展示信息
			wm.Show_Emp();
			break;
		case 3:
			//删除职工
			wm.Del_Emp();
		//测试代码
		/*{
			int ret = wm.IsExist(1);
			if (ret != -1)
			{
				cout << "职工存在" << endl;
			}
			else
			{
				cout << "职工不存在" << endl;
			}
		}*/
			break;
		case 4:
			//修改职工
			wm.Mod_Emp();
			break;
		case 5:
			//查找职工
			wm.Find_Emp();
			break;
		case 6:
			//排序职工
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_Emp();
			break;
		default:
			system("cls"); //清楚屏幕的显示内容
			break;
		}
	}

	return 0;
}