#include<bits/stdc++.h>
using namespace std;

int fib_iter(int n)
{
    if(n<=1)
        return n;
    
    int f1=0;
    int f2=1;
    int f=0;
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
