#ifndef Point_H
#define Point_H
#include <istream>
#include <iostream>
using namespace std;
class Point2D {
public:
	int x, y;
	Point2D(int x, int y);
};
class Z {
public:
	int z;
	Z(int z);
};
class H {
public:
	double h;
	H(double h);
};
class Point3Dh :public Point2D,public Z,public H {
private:
	int number;
public:
	Point3Dh(int x, int y, int z,double h);
	void real();
};

#endif Point_H