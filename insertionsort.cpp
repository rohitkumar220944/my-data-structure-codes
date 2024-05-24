#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=j-1;
        for(j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
int main()
{
    cout<<"naME:rohit kumar"<<endl;
    cout<<"enrollment number:0827cs221232"<<endl;
    int arr[5]={8,6,4,9,7};
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    insertionsort(arr,5);
    print(arr,5);
}