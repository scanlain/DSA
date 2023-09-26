#include<iostream>
using namespace std;

int main()
{
    int size, arr[10];

    cout<<"Enter the size of array:";
    cin>>size;

    cout<<"Enter elements:";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;

        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    cout<<"Sorted Array:";
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }


}