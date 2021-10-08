
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,p,t,p1;
    cout<<"Enter the amount of number you need to insert in an array :"<<endl;
    cin>>a;
    int ar[a+1];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<a;i++)
    cin>>ar[i];
    cout<<"Enter the number you need to insert in that array :"<<endl;
    cin>>b;
    cout<<"Enter the position where you need to insert that number :"<<endl;
    cin>>p1;
    p=p1-1;
    if(p<=a)
    {
    for(int i=a;i>=p;i--)
    ar[i]=ar[i-1];
    ar[p]=b;
    cout<<endl;
    for(int i=0;i<a+1;i++)
    cout<<ar[i]<<endl;
    }
    else
    cout<<"Please enter a valid position .\n Thank you";
}