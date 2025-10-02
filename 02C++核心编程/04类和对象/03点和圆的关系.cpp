//#include <iostream>
//using namespace std;
//
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
//
//void isInCircle(Circle& c, Point& p) {
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance) {
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//
//	}
//}
//
//int main3(void) {
//
//	Point cCenP;
//	cCenP.setX(0);
//	cCenP.setY(0);
//	Circle c;
//	c.setR(2);
//	c.setCenter(cCenP);
//
//	Point p1;
//	p1.setX(1);
//	p1.setY(1);
//
//	Point p2;
//	p2.setX(3);
//	p2.setY(3);
//
//	isInCircle(c, p1);
//	isInCircle(c, p2);
//
//
//
//	system("pause");
//	return 0;
//}