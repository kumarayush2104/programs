#include <iostream>
using namespace std;

int main(void) {
	float temp;
	cout << "Enter Temperature in Farenheit (*F): ";
	cin >> temp;
	cout << "Temperature in Celcius (*C) is: " << (temp-32)*5/9 << "\n";
}
