#include<iostream>
using namespace std;

int peakMountain(int arr[], int size){

    int start=0, end=size-1, mid = start + (end-start)/2;

    while(start<end){

        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
}

int main()
{
    int arr[100], size;
    cin>>size;

    cout<<"Enter elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Index of Peak Mountain element is : "<<peakMountain(arr, size);
}