#include<bits/stdc++.h>
using namespace std;

long long fib_iter(int n)
{
    if(n<=1)
        return n;
    
    long long f1=0,f2=1,f=0;
    for(int i=2;i<=n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;

}

int main()
{
    int n;
    cin>>n;

    cout<<"n(th) fibonacci number is: "<<fib_iter(n)<<"\n";

    return 0;
}
