#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number \n1 for Deposit \n2 for Withraw \n3 for Chek Balance \n4 for Exit :";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"How much amount you Deposit";
        int d;
        cin>>d;
        break;
    case 2:
        cout<<"How much amount you Withraw :";
        int w;
        cin>>w;
        break;
    case 3:
        cout<<"your balance is 500000";
        break;
    case 4:
        cout<<"Exit";
        break;
    default:
        cout<<"Try again.";
        break;
    }
}