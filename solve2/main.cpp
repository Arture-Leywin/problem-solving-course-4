#include <iostream>

using namespace std;

string ReadName(){
    cout<<"Enter your name : ";
    string Name;
    getline(cin,Name);
    return Name;
}
void print(string name)
{
    cout<<"your name is : "<<name<<endl;
}

int main()
{
    print(ReadName());
    return 0;
}
