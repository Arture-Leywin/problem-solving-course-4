#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadInfo()
{
    cout<<"---------------------"<<endl;
    stInfo Info;
    cout<<"Enter First Name : ";
    cin>>Info.FirstName;
    cout<<"Enter Last Name : ";
    cin>>Info.LastName;
    return Info;
}
bool ReversedOrNot()
{
    cout<<"Did you want your name to be reversed [y/n] : ";
    char reversed;
    cin>>reversed;
    if(reversed=='y'||reversed=='Y')
        return 1;
    else if(reversed=='n'||reversed=='N')
        return 0;
    else
        ReversedOrNot();
}

string GetFullName(stInfo Info)
{
    string FullName="";
    if(ReversedOrNot())
        FullName=Info.LastName + " " + Info.FirstName;
    else
        FullName=Info.FirstName + " " + Info.LastName;

    return FullName;
}
void PrintFullName(string FullName)
{
    cout<<"Full Name is :- \n ["<<FullName<<"]"<<endl;
}


int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}
