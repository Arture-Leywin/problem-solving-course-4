#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HaveDrivingLicense;
};
stInfo ReadInfo()
{
    cout<<"---------------------"<<endl;
    stInfo Info;
    cout<<"Enter Age : ";
    cin>>Info.Age;

    cout<<"Do you have License?[y/n] : ";
    char HaveLicense;
    cin>>HaveLicense;
    if(HaveLicense=='y'||HaveLicense=='Y')
    {
        Info.HaveDrivingLicense=1;
    }
    else if(HaveLicense=='n'||HaveLicense=='N')
    {
        Info.HaveDrivingLicense=0;
    }
    else
    {
        cout<<"Incorrect input try again"<<endl;
        ReadInfo();
    }

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return(Info.Age>21 && Info.HaveDrivingLicense);

}
void PrintResult(stInfo Info)
{
    if(IsAccepted(Info))
    {
        cout<<"\n Hired"<<endl;
    }
    else
        cout<<"\n Rejected"<<endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
