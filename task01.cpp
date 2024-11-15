#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number from 1 to 7 to check day  :";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wensday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Try again and enter from 1 to 7";
        break;
    }
}