#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int low=0, mid=0, high=size-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }
}