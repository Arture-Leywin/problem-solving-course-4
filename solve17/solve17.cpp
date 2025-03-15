#include <iostream>
#include <cmath>
using namespace std;

//read inputs
void ReadNumbers(float& a, float& h) {
	cout << "Enter the base : ";
	cin >> a;
	cout << "Enter the hieght : ";
	cin >> h;
}
//calc area by base and hieght
float TringleArea(float a, float h) {
	return (.5*a*h);
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {

	float a = 0, h = 0;
	ReadNumbers(a, h);
	PrintResult(TringleArea(a, h));
	return 0;
}