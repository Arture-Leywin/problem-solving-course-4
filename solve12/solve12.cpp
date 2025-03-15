#include <iostream>
#include <string>
using namespace std;

//read two number
void ReadNumbers(int& Num1 , int& Num2) {
    cout << "Enter Numbers : ";
    cin >> Num1 >> Num2;
}
//determine which is max
int DetermineMax(int& Num1, int& Num2) {
    return (Num1 > Num2) ? Num1 : Num2;
}
//print result
void PrintResult(int max) {
    cout << "Max number is : " + to_string(max);
}
int main()
{
    int Num1=0, Num2 = 0;
    ReadNumbers(Num1, Num2);
    PrintResult(DetermineMax(Num1, Num2));
}

