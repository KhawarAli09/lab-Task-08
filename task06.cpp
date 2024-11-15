#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character \nR for red \nG for Green \nY for yellow  :";
    cin>>a;
    switch (a)
    {
    case 'R':
        cout<<"Stop";
        break;
    case 'Y':
        cout<<"Slow down";
        break;
    case 'G':
        cout<<"Go";
        break;
    default:
        cout<<"Enter an other ";
        break;
    }
}