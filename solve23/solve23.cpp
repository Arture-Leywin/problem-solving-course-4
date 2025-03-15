#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read inputs
void ReadTringleData(float& a, float& b, float& c) {
	cout << "Enter triangel side a : ";
	cin >> a;
	cout << "Enter triangel side b : ";
	cin >> b;
	cout << "Enter triangel side c : ";
	cin >> c;
}
//calc area by ATriangle
float CircleAreaByATriangle(float a, float b, float& c) {
	float p = (a + b + c) / 2;
	float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	return pi * pow(t, 2);
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {
	float a = 0, b = 0 ,c=0;
	ReadTringleData(a, b, c);
	PrintResult(CircleAreaByATriangle(a, b, c));
	return 0;
}