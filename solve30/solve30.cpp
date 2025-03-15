#include <iostream>
using namespace std;

//read positive number
int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

//loop and print
int Factorial(int N) {
	int F = 1;
	for (size_t i = N; i >= 1; i--)
	{
		F = F * i;
	}
	return F;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Enter only positive number"));

	return 0;
}
