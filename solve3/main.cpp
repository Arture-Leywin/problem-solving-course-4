#include <iostream>
using namespace std;

enum enNumberType {Odd=1,Even=2};
int ReadNumber()
{
    cout<<"enter number : ";
    int Number;
    cin>>Number;
    return Number;
}
enNumberType CheckNumberType(int Num){
    if (Num%2==0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;

}
void PrintNumberType(enNumberType NumberType)
{
    if(NumberType==enNumberType::Even){
        cout<<"\n [ Number is Even ] \n";
    }
    else{
        cout<<"\n [ Number is Odd  ] \n";
    }
}
int main()
{

    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}
