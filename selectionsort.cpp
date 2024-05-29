#include <iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
        minindex=j;
        {
            swap(arr[minindex],arr[i]);
        }
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    cout<<arr[i]<<endl;
}
int main()
{
    cout<<"name: rohit kumar"<<endl;
    cout<<"enrollment number:0827cs221232"<<endl;
    int arr[5]={3,5,2,8,7};
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
    selectionsort(arr,5);
     cout<<"sorted element:"<<endl;
    print(arr,5);
}