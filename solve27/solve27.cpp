#include <iostream>
using namespace std;

//read i
int ReadNumber() {
	int s = 0;
	cout << "Enter the number : ";
	cin >> s;
	return s;
}
//loop and print
void PrintRangeFrom1ToN(int s) {
	for (size_t i = s; i >= 1; i--)
	{
		cout << i << endl;
	}
}
int main()
{
	PrintRangeFrom1ToN(ReadNumber());

	return 0;
}
