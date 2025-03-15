#include <iostream>
using namespace std;

//read the numbers
void ReadNumbers(int& Num1, int& Num2, int& Num3) {
    cout << "enter numbers :"<<endl;
    cin >> Num1 >> Num2 >> Num3;
}
//clac the sum
int SumOf3Numbers(int& Num1, int& Num2, int& Num3) {
    return (Num1 + Num2 + Num3);
}
//print the result
void PrintResults(int total) {
    cout << "sum is : " << total;
}
int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(SumOf3Numbers(Num1, Num2, Num3));
}

