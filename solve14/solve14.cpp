#include <iostream>
using namespace std;


void ReadNumbers(int& Num1, int& Num2) {
    cout << "Enter Numbers : ";
    cin >> Num1 >> Num2 ;
}

void Swap(int& Num1, int& Num2) {
    int temp = Num1;
    Num1 = Num2;
    Num2 = temp;
}

void PrintNumbers(int& Num1 , int& Num2) {
    cout << Num1<<" "<< Num2 << endl;
}
int main()
{
    int Num1 = 0, Num2 = 0;
    ReadNumbers(Num1, Num2);
    cout << "Before swap"<<endl;
    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    cout << "After swap"<<endl;
    PrintNumbers(Num1, Num2);
}

