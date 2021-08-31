#include<iostream>
using namespace std;
#define array 5
int main()
{
    int numbers[array],i,j,temp;
    for(i=0;i<5;i++)
    {
        cout<<"enter no :";
        cin>>numbers[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(numbers[i]>numbers[j])
          {

           temp=numbers[i];
           numbers[i]=numbers[j];
           numbers[j]=temp;
          }
        }
    }
    cout<<"sorted order";
    for(i=0;i<5;i++)
    {
        cout<<numbers[i]<<"\t"<<endl;
    }
    return 0;
}
