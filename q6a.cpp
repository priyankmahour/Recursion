#include<bits/stdc++.h>
using namespace std;
// sum of first n numbers
// parameterized way means we are not returning the value to function, we are printing it;

void sum_of_n(int n,int res)
{
    if(n<1)
    {
        cout<<res<<"\n";
        return;
    }
    res+=n;
    sum_of_n(n-1,res);

}


int main()
{
    int n,res=0;
    cin>>n;
    sum_of_n(n,res);
    return 0;
}

