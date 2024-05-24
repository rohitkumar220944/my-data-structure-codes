#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    cout<<arr[i]<<endl;
}
int main()
{cout<<"name:rohit kumar"<<endl;
cout<<"enrollment number:0827cs221232"<<endl;
    int arr[5]={9,7,6,3,8};
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
    cout<<"sorted element:";
    bubblesort(arr,5);
    print(arr,5);
}