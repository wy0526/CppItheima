#include "circle.h"

void isInCircle(Circle& c, Point& p) {
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	if (distance == rDistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;

	}
}

int main3(void) {

	Point cCenP;
	cCenP.setX(0);
	cCenP.setY(0);
	Circle c;
	c.setR(2);
	c.setCenter(cCenP);

	Point p1;
	p1.setX(1);
	p1.setY(1);

	Point p2;
	p2.setX(3);
	p2.setY(3);

	isInCircle(c, p1);
	isInCircle(c, p2);



	system("pause");
	return 0;
}