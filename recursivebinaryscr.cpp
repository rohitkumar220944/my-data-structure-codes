#include<iostream>
using namespace std;
int bainary search(int arr[],int low,int high,int key)
{
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        esle if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        return 1;
    }
}
int main()
{
    int arr[5]={6,8,9,4,3};
    int ket;
    cin>>key;
    int index=binary search(arr,5,12);
    cout<<index;
}