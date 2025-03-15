#include <iostream>
#include <cmath>
using namespace std;

//read inputs
void ReadNumbers(float& a, float& b) {
	cout << "Enter side : ";
	cin >> a;
	cout << "Enter diagonal : ";
	cin >> b;
}
//calc area by side and diagonal
float RecAreaBySideAndDiagonal(float a, float b) {	
	return (a * sqrt(pow(b, 2) - pow(a, 2)));
}
//print area
void PrintResult(float area) {
	cout << "The area is : " << area;
}

int main() {
	
	float a = 0, b = 0;
	ReadNumbers(a, b);
	PrintResult(RecAreaBySideAndDiagonal(a, b));
	return 0;
}