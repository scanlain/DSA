#include<iostream>
using namespace std;

int main()
{
    int arr[10], size;

    cout<<"Enter size of array:";
    cin>>size;

    cout<<"ENter the elements :";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<size; i++)
    {
        int j=i-1;
        int temp = arr[i];

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }

    cout<<"Sorted array:";
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }
}