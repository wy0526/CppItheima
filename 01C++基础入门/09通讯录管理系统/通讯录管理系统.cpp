#include <iostream>
using namespace std;
#include <string.h>
#define MAX 1000       //宏名都大写

struct Person {        //结构体名首字母大写
	string m_Name;     //驼峰命名法
	int m_Sex;         //防止输入其他内容
	int m_Age;
	string m_Phone;	   //?
	string m_Addr;
};

struct AddressBooks {  //?
	struct Person personArray[MAX];  //驼峰命名法
	int m_Size;
};

//1、添加联系人
void addPerson(AddressBooks* abs) {
	if (abs->m_Size == 1000) {
		cout << "通讯录已满，无法添加联系人" << endl;
		return; //返回值为空时，可以用return或者直接不写
	}
	else {
		//姓名
		string name; // ？        初始化
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 ---- 男" << endl;
		cout << "2 ---- 女" << endl;
		while (true) {
			cin >> sex;

			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break; //写一个死循环，只要输错就循环输入；直到输入1或2才跳出循环
			}
			else {
				cout << "请您重新输入：" << endl;
			}
		}
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		while (true) {
			cin >> age;
			if (age > 0) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else {
				cout << "请您重新输入：" << endl;
			}
		}

		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;

		//清屏效果
		system("pause");
		system("cls");
	}
}

//2、显示联系人
void showPerson(struct AddressBooks * abs) {
	if (abs->m_Size <= 0) {
		cout << "请添加联系人" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << i + 1 << "、";
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女" ) << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//3-1、检测联系人是否存在
int isExist(struct AddressBooks* abs, string person) {
	for (int i = 0; i < (abs->m_Size); i++) {
		if (abs->personArray[i].m_Name == person) {
			return i;
		}
	}
	return -1;
}

//3-2、删除联系人
void deletePerson(struct AddressBooks * abs) {
	string name;
	cout << "请输入要删除的联系人姓名：" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "该联系人不存在" << endl;
	}
	else {
		for (int i = res; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

//4、查找联系人
void findPerson(struct AddressBooks* abs) {
	string name;
	cout << "请输入要查找的联系人姓名：" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "联系人不存在" << endl;
	}
	else {
		cout << "姓名：" << abs->personArray[res].m_Name << endl;
		cout << "年龄：" << abs->personArray[res].m_Age << endl;
		cout << "性别：" << abs->personArray[res].m_Sex << endl;
		cout << "电话：" << abs->personArray[res].m_Phone << endl;
		cout << "地址：" << abs->personArray[res].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//5、修改联系人
void changePerson(struct AddressBooks * abs) {
	string name;
	cout << "请输入要修改的联系人姓名：" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "该联系人不存在" << endl;
	}
	else {
		//姓名
		cout << "原姓名：" << abs->personArray[res].m_Name << "\t";
		cout << "请输入新姓名：";
		string name;
		cin >> name;
		abs->personArray[res].m_Name = name;
		//年龄
		cout << "原年龄：" << abs->personArray[res].m_Age << "\t";
		cout << "请输入新年龄：";
		while (true) {
			int age = 0;
			cin >> age;
			if (age > 0) {
				abs->personArray[res].m_Age = age;
				break;
			}
			else {
				cout << "请重新输入" << endl;
			}
		}
		//性别
		cout << "原性别：" << (abs->personArray[res].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "请输入新性别(1-男;2-女)：";
		while (true) {
			int sex;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[res].m_Sex = sex;
				break;
			}
			else {
				cout << "请重新输入" << endl;
			}
		}
		//电话
		cout << "原电话：" << abs->personArray[res].m_Phone << "\t";
		cout << "请输入新电话：";
		string phone;
		cin >> phone;
		abs->personArray[res].m_Phone = phone;
		//地址
		cout << "原地址：" << abs->personArray[res].m_Addr << "\t";
		cout << "请输入新地址：";
		string address;
		cin >> address;
		abs->personArray[res].m_Addr = address;
		cout << "修改成功！" << endl;
	}
	system("pause");
	system("cls");
}

//6、清空联系人
void cleanPerson(struct AddressBooks* abs) {
	abs->m_Size = 0;
	cout << "联系人已清空" << endl;
	system("pause");
	system("cls");
}

//0、菜单
void showMenu() {

	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

int main(void) {

	struct AddressBooks abs;
	abs.m_Size = 0;

	while (true) {

		showMenu();

		int select = 0;
		cout << "请输入您的操作：" << endl;
		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
		{
			deletePerson(&abs);
			/* 检测联系人是否存在的测试代码
			string person;
			cout << "请输入姓名：";
			cin >> person;
			if (isExist(&abs, person) == -1) {
				cout << "查无此人" << endl;
			}
			else {
				cout << "这个人在通讯录中的第" << isExist(&abs, person) + 1 << "个" << endl;
			}*/
		}
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			changePerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用!" << endl;
			system("pause");
			return 0;  //死循环出口，主函数中的 return 代表主函数运行结束，所以可以当死循环的出口
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}