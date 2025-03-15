#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read input
float ReadNumber() {
	float r;
	cout << "Enter the radious : ";
	cin >> r;
	return r;
}
//calc area by radious
float CircleAreaByRadious(float r) {
	return (pow(r,2)*pi);
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {

	PrintResult(CircleAreaByRadious(ReadNumber()));
	return 0;
}