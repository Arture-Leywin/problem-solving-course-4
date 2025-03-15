#include <iostream>
using namespace std;

//read N
int ReadNumber() {
	int N = 0;
	cout << "Enter the number : ";
	cin >> N;
	return N;
}
//loop and print
void PrintRangeFrom1ToN(int N) {
	for (size_t i = 1; i <= N; i++)
	{
		cout << i<<endl;
	}
}
int main()
{
	PrintRangeFrom1ToN(ReadNumber());

	return 0;
}
