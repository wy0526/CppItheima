#include <iostream>
using namespace std;

class Building
{
	friend class GoodGay;
public:
	Building(); //构造函数

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
	
};
	
Building::Building() //类外实现构造函数
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";

}

class GoodGay
{
public:
	GoodGay(); //构造函数
public:
	Building* building;
	void visit();
};

GoodGay::GoodGay() //类外实现构造函数
{
	building = new Building;
}

void GoodGay::visit()  //类外实现类的成员函数
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void main()
{
	GoodGay goodgay;
	goodgay.visit();
	system("pause");
	return;
}