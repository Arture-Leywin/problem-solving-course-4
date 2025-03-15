#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read input
float ReadNumber() {
	float a;
	cout << "Enter the diameter : ";
	cin >> a;
	return a;
}
//calc area of circle inscribed in square
float CircleAreaInscribedInSquare(float a) {
	return (pi * pow(a, 2))/4;
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {

	PrintResult(CircleAreaInscribedInSquare(ReadNumber()));
	return 0;
}