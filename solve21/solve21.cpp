#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read input
float ReadCircumference() {
	float l;
	cout << "Enter the diameter : ";
	cin >> l;
	return l;
}
//calc area by circumference
float CircleAreaByCircumference(float l) {
	return (pow(l, 2) / (4 * pi));
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {

	PrintResult(CircleAreaByCircumference(ReadCircumference()));
	return 0;
}