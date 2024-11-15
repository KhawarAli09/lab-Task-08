#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a Grade like :A,B,C,D,F :";
    cin>>a;
    switch (a)
    {
    case 'A':
        cout<<"Exellent";
        break;
    case 'B':
        cout<<"Good";
        break;
    case 'C':
        cout<<"Not bad";
        break;
    case 'D':
        cout<<"Bad";
        break;
    case 'F':
        cout<<"Fail";
        break;
    default:
        cout<<"try again and Enter correct grade";
        break;
    }
}