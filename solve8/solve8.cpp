#include <iostream>
using namespace std;

//read mark
double ReadMark() {
	double Mark;
	cout << "Enter your mark : ";
	cin >> Mark;
	return Mark;
}
//status tpye 
enum enStudentStatus { Pass = 1, Fail = 2 };
//check student status
enStudentStatus CheckMark(double Mark) {

	if (Mark >= 50) {
		return enStudentStatus::Pass;
	}
	else {
		return enStudentStatus::Fail;
	}
}
//print result
void PrintResult(double Mark) {
	if (CheckMark(Mark) == enStudentStatus::Pass) {
		cout << "\n You Passed" << endl;
	}
	else
	{
		cout << "\n You Faild" << endl;
	}
}

int main()
{
	PrintResult(ReadMark());

	return 0;
}

