#include <iostream>
using namespace std;

//take number
double GetNumber() {
    double Number;
    cout << "Enter the number : ";
    cin >> Number;
    return Number;
}
//found it's half 
double CalcNumberHalf(double Number) {
    return (Number / 2);
}
//print it
void PrintHalfOfNumber(double Number) {
    cout << "Half of " << Number << " is " << CalcNumberHalf(Number);
}

int main()
{
    PrintHalfOfNumber(GetNumber());
    return 0;
}
