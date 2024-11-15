#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number for mounth from 1 to 12 :";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"January \nwinter";
        break;
    case 2:
        cout<<"Febuary \nwinter";
        break;
    case 3:
        cout<<"Martch \nautom";
        break;
    case 4:
        cout<<"Apral\nautom";
        break;
    case 5:
        cout<<"May\nsummer";
        break;
    case 6:
        cout<<"June\nsummer";
        break;
    case 7:
        cout<<"July\nsummer";
        break;
    case 8:
        cout<<"August\nsummer";
        break;
    case 9:
        cout<<"september\nspring";
        break;
    case 10:
        cout<<"October\nspring";
        break;
    case 11:
        cout<<"November\nwinter";
        break;
    case 12:
        cout<<"December\nwinter";
        break;
    default:
        cout<<"Enter another number";
        break;
    }
}