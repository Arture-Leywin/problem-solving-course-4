#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

//read input
float ReadNumber() {
	float d;
	cout << "Enter the diameter : ";
	cin >> d;
	return d;
}
//calc area by diameter
float CircleAreaByDiameter(float d) {
	return ( pi*pow(d,2) / 4 );
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {

	PrintResult(CircleAreaByDiameter(ReadNumber()));
	return 0;
}