#include<iostream>
using namespace std;

int main()
{
    int arr[100], size;

    cout<<"Enter the size:";
    cin>>size;

    cout<<"Enter the elements:";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<size; i++)
    {
        bool swapped = false;

        for(int j=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false)
        {
            break;
        }
    }

    cout<<"Sorted Elements:";
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }
}