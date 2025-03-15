#include <iostream>
using namespace std;

enum enPassFail{Pass=1,Fail=2};

void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
    cout << "enter Marks :" << endl;
    cin >> Mark1 >> Mark2 >> Mark3;
}

int SumOf3Marks(int& Mark1, int& Mark2, int& Mark3) {
    return (Mark1 + Mark2 + Mark3);
}

float CalcAvg(int& Mark1, int& Mark2, int& Mark3) {
    return ((float)SumOf3Marks(Mark1, Mark2, Mark3) )/ 3;
}

enPassFail CheckAvg(float Average) {
    return (Average >= 50) ? enPassFail::Pass : enPassFail::Fail;
}

void PrintResults(float total) {
    (CheckAvg(total) == enPassFail::Pass) ? cout << "Pass" : cout << "Faild";
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalcAvg(Mark1, Mark2, Mark3));
}

