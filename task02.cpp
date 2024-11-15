#include<iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout<<"Enter a  first nmuber : ";
    cin>>num1;
    cout<<"Enter a second number :";
    cin>>num2;
    char a;
    cout<<"Enter a operator +,-,*,/ :";
    cin>>a;
    switch (a)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    default:
        cout<<"Try again and enter a operator +,-,*,/ ";
        break;
    }
}