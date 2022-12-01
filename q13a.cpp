#include<bits/stdc++.h>
using namespace std;

bool flag=false;
void subsequenc_ssum_k(int i, vector<int>&vec,int arr[],int sum,int k,int n)
{
    if(i==n)
    {
        if(sum==k and !(flag))
        {
            flag=true;
            cout<<"{";
            for(auto it: vec)
            {
                cout<<it<<",";
            }
            cout<<"}"<<endl;
        }
        return;
    }

    vec.push_back(arr[i]);
    sum+=arr[i];
    subsequenc_ssum_k(i+1,vec,arr,sum,k,n);

    //backtrack
    vec.pop_back();
    sum-=arr[i];
    subsequenc_ssum_k(i+1,vec,arr,sum,k,n);



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

    subsequenc_ssum_k(0,vec,arr,sum,k,n);
    return 0;
}


