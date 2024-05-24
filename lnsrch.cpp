#include<iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(arr[i]==key)
{return 1;}
}
return 0;
}
int main()
{   cout<<"name:rohit kumat"<<endl;
cout<<"enrollment number:0827cs221232"<<endl;
    int arr[5]={3,6,2,7,9};
     cout<<"element of array:";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
    int key;
    cout<<"enter the element:";
    cin>>key;
    bool found=search(arr,5,key);
    if(found)
    {cout<<"element is present";}
    else
    {cout<<"element is absent";}
    return 0;
}
