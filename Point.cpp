#include"Point.h";
Point2D::Point2D(int x,int y) {
	this->x = x;
	this->y = y;
}
Z::Z(int z) {
	this->z = z;
}
H::H(double h) {
	this->h = h;
}
Point3Dh::Point3Dh(int x, int y, int z, double h):Point2D(x,y),Z(z),H(h) {
	number = 0;
	if (this->h == 0) {
		number = 1;
	}
}
void Point3Dh::real() {
	if (number == 0) {
		cout<< "(" << this->x / this->h << ", " << this->y / this->h << ", " << this->z / this->h << ")" << endl;
	}
	else {
		cout << "4 координата не должна равняться 0!" << endl;
	}
}


