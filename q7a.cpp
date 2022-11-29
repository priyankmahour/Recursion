#include<bits/stdc++.h>
using namespace std;


void fact_para(int n,long long fact)
{
    if(n==1)
    {
        cout<<fact<<"\n";
        return;
    } 
    fact*=n;
    fact_para(n-1,fact);

}

int main()
{
    int n;
    cin>>n;
    long long fact=1;
    fact_para(n,fact);

    return 0;
}