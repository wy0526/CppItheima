#include <iostream>
using namespace std;

class Building {	
	//全局函数做友元
	friend void goodGay(Building* building);

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

public:
	string m_SittingRoom;
private:
	string m_BedRoom;


};

void goodGay(Building* building)
{
	cout << "正在访问：" << building->m_SittingRoom << endl;

	cout << "正在访问：" << building->m_BedRoom << endl;
}

void main() {

	Building building;
	goodGay(&building);

	system("pause");
	return;
}