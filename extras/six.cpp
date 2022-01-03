#include <iostream>
using namespace std;

int main(void) {
	const float PI = 3.14;
	int rad;

//Rectangle
	int length, width;
	cout << "-------------------------------\n";
	cout << "	Area of Rectangle	\n";
	cout << "-------------------------------\n";
	cout << "Enter area of length: ";
	cin >> length;
	cout << "Enter length of width: ";
	cin >> width;
	cout << "Area of Rectangle: " << length*width << "\n\n";


//Sphere
	cout << "-------------------------------\n";
	cout << "	  Area of Sphere	\n";
	cout << "-------------------------------\n";
	cout << "Enter Radius: ";
	cin >> rad;
	cout << "Area of Sphere: " << 4*rad*PI*rad << "\n\n";


//Circle
	cout << "------------------------------\n";
	cout << "	 Area of Circle\n";
	cout << "------------------------------\n";
	cout << "Enter Radius: ";
	cin >> rad;
	cout << "Area of Circle: " << rad*PI*rad << "\n\n";

}
