#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read inputs
void ReadTringleData(float& a,float&b) {
	cout << "Enter triangel side a : ";
	cin >> a;
	cout << "Enter triangel side b : ";
	cin >> b;
}
//calc area by circumference
float CircleAreaByITriangle(float a,float b) {
	return pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {
	float a = 0, b = 0;
	ReadTringleData(a, b);
	PrintResult(CircleAreaByITriangle(a,b));
	return 0;
}