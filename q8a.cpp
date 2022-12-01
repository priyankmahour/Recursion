#include<bits/stdc++.h>
using namespace std;

void reverse_iterative(int arr[],int n)
{
    
    for(int i=0;i<=(n/2);i++)
    {
        cout<<arr[i]<<" "<<arr[n-i-1]<<"\n";
        swap(arr[i],arr[n-i-1]);
    }
    cout<<"\n";
}

void reverse_iterative_2(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        cout<<i<<" "<<j<<"\n";
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"\n";

}

int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // reverse_iterative(arr,n);
    reverse_iterative_2(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}


