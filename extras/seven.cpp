#include <iostream>
using namespace std;

int main(void) {
	char name[50], clgName[90], crsName[30];
	long long enroll;
	cout << "Enter Your name: ";
	cin >> name;
	cout << "Enter Enrollment Number: ";
	cin >> enroll;
	cout << "Enter College Name: ";
	cin >> clgName;
	cout << "Enter Course Name: ";
	cin >> crsName;
	cout << "--------------------------------------------------------\n";
	cout << "		     Student Biodata			 \n";
	cout << "--------------------------------------------------------\n";
	cout << name << "\n";
	cout << enroll << "\n";
	cout << clgName << "\n";
	cout << crsName << "\n";
}
