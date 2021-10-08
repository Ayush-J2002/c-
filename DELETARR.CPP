#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,t,b,a1;
    cout<<"Enter the amount of elements you want to enter"<<endl;
    cin>>b;
    int ar[b];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<b;i++)
    cin>>ar[i];
    cout<<"Enter the position of element you want to delete"<<endl;
    cin>>a1;
    a=a1-1;
    if(a1<=b)
    {
    for(int i=a;i<b-1;i++)
    ar[i]=ar[i+1];
    cout<<endl;
    for(int j =0;j<b-1;j++)
    cout<<ar[j]<<endl;
    }
    else
    cout<<"Enter a vaild position to delete an element from array :"<<endl;
}