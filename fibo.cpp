#include<iostream>
using namespace std;

void fibo(int n)
{
    int a=0,b=1,c=0;

    cout<<0<<" "<<1;

    for(int i=2; i<n; i++)
    {
        c = a+b;
        cout<<" "<<c;
        a = b;
        b = c;
    }
    
}


int main()
{
    int n;
    cin>>n;

    fibo(n);
}