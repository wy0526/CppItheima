#include <iostream>
using namespace std;

class Building
{
	friend class GoodGay;
public:
	Building(); //���캯��

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
	
};
	
Building::Building() //����ʵ�ֹ��캯��
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";

}

class GoodGay
{
public:
	GoodGay(); //���캯��
public:
	Building* building;
	void visit();
};

GoodGay::GoodGay() //����ʵ�ֹ��캯��
{
	building = new Building;
}

void GoodGay::visit()  //����ʵ����ĳ�Ա����
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void main()
{
	GoodGay goodgay;
	goodgay.visit();
	system("pause");
	return;
}