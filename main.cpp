#include"Point.h";
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	Point3Dh p1(6, 6, 6, 6);
	Point3Dh p2(1, 2, 3, 4);
	Point3Dh p3(100, 100, 101, 0);
	cout << "_______________________" << endl;
	cout << "                       |" << endl;
	cout << "                       |" << endl;
	cout << " Однородные координаты |" << endl;
	cout << "                       |" << endl;
	cout << "_______________________|" << endl;
	cout << "Точка 1: (x=6, y=6, z=6, h=6)" << endl;
	cout << "Точка 2: (x=1, y=2, z=3, h=4)" << endl;
	cout << "Точка 3: (x=100, y=100, z=101, h=0)" << endl;
	system("pause");
	system("cls");
	cout << "_______________________" << endl;
	cout << "                       |" << endl;
	cout << "                       |" << endl;
	cout << " Реальные координаты   |" << endl;
	cout << "                       |" << endl;
	cout << "_______________________|" << endl;
	cout << "Точка 1: ";
	p1.real();
	cout << endl;
	cout << "Точка 2: ";
	p2.real();
	cout << endl;
	cout << "Точка 3: ";
	p3.real();
}
