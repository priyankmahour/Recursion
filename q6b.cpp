#include<bits/stdc++.h>
using namespace std;

// funstional recursion for sum of n numbers, where we return the value to function

int sum_of_n(int n)
{
    if (n==1)
        return 1;
    return (n+sum_of_n(n-1));

}

int main()
{
    int n;
    cin>>n;
    cout<<sum_of_n(n)<<"\n";

    return 0;
}


