#include<bits/stdc++.h>
using namespace std;

long long fib_rec(int n,long long dp[])
{
    if(n<=1)
    {
        return dp[n]=n;
    }

    if(dp[n]!=-1)
        return  dp[n];
        
    return dp[n]=fib_rec(n-1,dp)+fib_rec(n-2,dp);
}

int main()
{
    int n;
    cin>>n;
    long long dp[n+1];
    memset(dp,-1,sizeof(dp));

    cout<<"n(th) fibonacci no is: "<<fib_rec(n,dp)<<endl;

}
