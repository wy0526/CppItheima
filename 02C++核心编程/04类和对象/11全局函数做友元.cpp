#include <iostream>
using namespace std;

class Building {	
	//ȫ�ֺ�������Ԫ
	friend void goodGay(Building* building);

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;
private:
	string m_BedRoom;


};

void goodGay(Building* building)
{
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void main() {

	Building building;
	goodGay(&building);

	system("pause");
	return;
}