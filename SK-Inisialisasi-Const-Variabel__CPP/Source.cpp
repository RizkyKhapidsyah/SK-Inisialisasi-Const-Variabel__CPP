#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

class circle {

	double r;
	const double pi;

public:
	circle(double r) : pi(3.14159) {
		this->r = r;
	}

	double area() {
		return pi * (pow(r, 2));
	}

	double circumference() {
		return 2 * pi * r;
	}

};

int main() {
	circle c = circle(6.70);
	cout << "area of circle : " << c.area() << endl;
	cout << "circumference of circle : " << c.circumference() << endl;

	_getch();
	return 0;
}