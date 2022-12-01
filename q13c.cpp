#include<bits/stdc++.h>
using namespace std;

int subsequenc_ssum_k(int i, vector<int>&vec,int arr[],int sum,int k,int n)   //  ,int &count  in receiving
{
    if(i==n)
    {
        if(sum==k)
        {
            return 1;
            // count++;
            // cout<<"{";
            // for(auto it: vec)
            // {
            //     cout<<it<<",";
            // }
            // cout<<"}"<<endl;
        }
        return 0;
    }

    vec.push_back(arr[i]);
    sum+=arr[i];
    int l;
    l=subsequenc_ssum_k(i+1,vec,arr,sum,k,n);   // , count in calling

    //backtrack
    vec.pop_back();
    sum-=arr[i];
    int r;
    r=subsequenc_ssum_k(i+1,vec,arr,sum,k,n);   // , count in calling

    return l+r;


}


int main()
{
    int n,k;        
    cin>>n>>k;      // 3 2
    int arr[n];     // 1 2 1

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int> vec;
    int sum=0;
    int count=0;

    cout<<subsequenc_ssum_k(0,vec,arr,sum,k,n)<<"\n";     // ,count in calling function
    // cout<<count<<"\n";
    return 0;
}


