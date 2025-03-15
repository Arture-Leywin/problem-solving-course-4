#include <iostream>
using namespace std;

int ReadAge() {
	int age;
	cout << "Enter the age : ";
	cin >> age;
	return age;
}
bool ValidateNumberInRange(int Number,int From ,int To) {
	return (Number >= From && Number <= To);
}
void PrintResult(int Age) {
	(ValidateNumberInRange(Age, 18, 45)) ? cout << "Valid age" << endl : cout << "Invalid age" << endl;
}

int main()
{
	PrintResult(ReadAge());

}
