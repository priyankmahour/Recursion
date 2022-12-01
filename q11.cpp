#include<bits/stdc++.h>
using namespace std;

void print_subsequences(int i,int arr[],int n,vector<int>&res)
{
    if(i>=n)
    {
        cout<<"{";
        for(auto it:res)
        {
            cout<<it<<",";
        }
        cout<<"}"<<"\n";

        return;   
    }

    res.push_back(arr[i]);
    print_subsequences(i+1,arr,n,res);
    
    res.pop_back();
    print_subsequences(i+1,arr,n,res);

}

int  main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"All the sub sequences of given array is: "<<"\n";
    vector<int>res;
    print_subsequences(0,arr,n,res);

    return 0;
}