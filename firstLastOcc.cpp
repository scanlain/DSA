#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start=0, end=size-1, mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start=0, end=size-1, mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int main()
{
    int arr[100],size;
    cin>>size;

    cout<<"Enter elements in ascending order: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<"First Occurrence of "<<key<<" is :"<<firstOcc(arr, size, key);
    cout<<"Last Occurrence of "<<key<<" is :"<<lastOcc(arr, size, key);
}