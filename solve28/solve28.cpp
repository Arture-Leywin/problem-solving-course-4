#include <iostream>
using namespace std;

enum enOddOrEven{Odd=1,Even=2};
enOddOrEven CheckOddOrEven(int Number) {
	return (Number % 2 != 0) ? enOddOrEven::Odd : enOddOrEven::Even;
}
//read end
int ReadNumber() {
	int N = 0;
	cout << "Enter the number : ";
	cin >> N;
	return N;
}
//loop and print
int SumRangeFrom1ToN_Odd(int N) {
	int Sum = 0;
	for (size_t i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i)==enOddOrEven::Odd) {
			Sum += i;
		}
	}
	return Sum;
}

int main()
{
	cout<<SumRangeFrom1ToN_Odd(ReadNumber());

	return 0;
}
