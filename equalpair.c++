#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
   


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]+arr[j]==10)
            {
                cout<<arr[i]<<" "<< arr[j]<<endl;
            }
        }
    }
}