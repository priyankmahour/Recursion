#include<bits/stdc++.h>
using namespace std;


void reverse_1(int arr[],int i,int n)
{   
    if(i>=(n/2))
        return;

    cout<<i<<" "<<n-i-1<<"\n";
    swap(arr[i],arr[n-i-1]);
    reverse_1(arr,i+1,n);

}


void reverse_2(int arr[],int i,int j)
{
    if(i>=j)
        return;
    
    swap(arr[i],arr[j]);
    reverse_2(arr,i+1,j-1);

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

    //reverse_1(arr,0,n);
    reverse_2(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
