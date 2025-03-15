#include <iostream>
using namespace std;

//read the numbers
void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
    cout << "enter Marks :" << endl;
    cin >> Mark1 >> Mark2 >> Mark3;
}
//clac the sum
int SumOf3Marks(int& Mark1, int& Mark2, int& Mark3) {
    return (Mark1 + Mark2 + Mark3);
}

float CalcAvg(int& Mark1, int& Mark2, int& Mark3) {
    return (float)SumOf3Marks(Mark1,Mark2,Mark3)/3;
}
//print the result
void PrintResults(float total) {
    cout << "AVG is : " << total;
}
int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalcAvg(Mark1, Mark2, Mark3));
}

