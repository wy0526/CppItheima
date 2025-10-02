#include <iostream>
using namespace std;
#include <string.h>
#define MAX 1000       //��������д

struct Person {        //�ṹ��������ĸ��д
	string m_Name;     //�շ�������
	int m_Sex;         //��ֹ������������
	int m_Age;
	string m_Phone;	   //?
	string m_Addr;
};

struct AddressBooks {  //?
	struct Person personArray[MAX];  //�շ�������
	int m_Size;
};

//1�������ϵ��
void addPerson(AddressBooks* abs) {
	if (abs->m_Size == 1000) {
		cout << "ͨѶ¼�������޷������ϵ��" << endl;
		return; //����ֵΪ��ʱ��������return����ֱ�Ӳ�д
	}
	else {
		//����
		string name; // ��        ��ʼ��
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 ---- ��" << endl;
		cout << "2 ---- Ů" << endl;
		while (true) {
			cin >> sex;

			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break; //дһ����ѭ����ֻҪ����ѭ�����룻ֱ������1��2������ѭ��
			}
			else {
				cout << "�����������룺" << endl;
			}
		}
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		while (true) {
			cin >> age;
			if (age > 0) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else {
				cout << "�����������룺" << endl;
			}
		}

		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string addr;
		cout << "�������ַ��" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;

		//����Ч��
		system("pause");
		system("cls");
	}
}

//2����ʾ��ϵ��
void showPerson(struct AddressBooks * abs) {
	if (abs->m_Size <= 0) {
		cout << "�������ϵ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << i + 1 << "��";
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů" ) << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//3-1�������ϵ���Ƿ����
int isExist(struct AddressBooks* abs, string person) {
	for (int i = 0; i < (abs->m_Size); i++) {
		if (abs->personArray[i].m_Name == person) {
			return i;
		}
	}
	return -1;
}

//3-2��ɾ����ϵ��
void deletePerson(struct AddressBooks * abs) {
	string name;
	cout << "������Ҫɾ������ϵ��������" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "����ϵ�˲�����" << endl;
	}
	else {
		for (int i = res; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//4��������ϵ��
void findPerson(struct AddressBooks* abs) {
	string name;
	cout << "������Ҫ���ҵ���ϵ��������" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "��ϵ�˲�����" << endl;
	}
	else {
		cout << "������" << abs->personArray[res].m_Name << endl;
		cout << "���䣺" << abs->personArray[res].m_Age << endl;
		cout << "�Ա�" << abs->personArray[res].m_Sex << endl;
		cout << "�绰��" << abs->personArray[res].m_Phone << endl;
		cout << "��ַ��" << abs->personArray[res].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//5���޸���ϵ��
void changePerson(struct AddressBooks * abs) {
	string name;
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	cin >> name;
	int res = isExist(abs, name);
	if (res == -1) {
		cout << "����ϵ�˲�����" << endl;
	}
	else {
		//����
		cout << "ԭ������" << abs->personArray[res].m_Name << "\t";
		cout << "��������������";
		string name;
		cin >> name;
		abs->personArray[res].m_Name = name;
		//����
		cout << "ԭ���䣺" << abs->personArray[res].m_Age << "\t";
		cout << "�����������䣺";
		while (true) {
			int age = 0;
			cin >> age;
			if (age > 0) {
				abs->personArray[res].m_Age = age;
				break;
			}
			else {
				cout << "����������" << endl;
			}
		}
		//�Ա�
		cout << "ԭ�Ա�" << (abs->personArray[res].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���������Ա�(1-��;2-Ů)��";
		while (true) {
			int sex;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[res].m_Sex = sex;
				break;
			}
			else {
				cout << "����������" << endl;
			}
		}
		//�绰
		cout << "ԭ�绰��" << abs->personArray[res].m_Phone << "\t";
		cout << "�������µ绰��";
		string phone;
		cin >> phone;
		abs->personArray[res].m_Phone = phone;
		//��ַ
		cout << "ԭ��ַ��" << abs->personArray[res].m_Addr << "\t";
		cout << "�������µ�ַ��";
		string address;
		cin >> address;
		abs->personArray[res].m_Addr = address;
		cout << "�޸ĳɹ���" << endl;
	}
	system("pause");
	system("cls");
}

//6�������ϵ��
void cleanPerson(struct AddressBooks* abs) {
	abs->m_Size = 0;
	cout << "��ϵ�������" << endl;
	system("pause");
	system("cls");
}

//0���˵�
void showMenu() {

	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

int main(void) {

	struct AddressBooks abs;
	abs.m_Size = 0;

	while (true) {

		showMenu();

		int select = 0;
		cout << "���������Ĳ�����" << endl;
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
			/* �����ϵ���Ƿ���ڵĲ��Դ���
			string person;
			cout << "������������";
			cin >> person;
			if (isExist(&abs, person) == -1) {
				cout << "���޴���" << endl;
			}
			else {
				cout << "�������ͨѶ¼�еĵ�" << isExist(&abs, person) + 1 << "��" << endl;
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
			cout << "��ӭ�´�ʹ��!" << endl;
			system("pause");
			return 0;  //��ѭ�����ڣ��������е� return �������������н��������Կ��Ե���ѭ���ĳ���
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}