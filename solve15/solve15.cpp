#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(float& Num1, float& Num2) {
    cout << "Enter Numbers : ";
    cin >> Num1 >> Num2;
}

float CalcRecArea(float& Num1, float& Num2) {
    return Num1 * Num2;
}

void PrintResult(float area) {
    cout <<"Rectangle are is : "<< area << endl;
}
int main()
{
    float Num1 = 0, Num2 = 0;
    ReadNumbers(Num1, Num2);
    PrintResult(CalcRecArea(Num1, Num2));
}