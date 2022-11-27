#include<bits/stdc++.h>
using namespace std;

// parameterized recursion call;
void print_one_to_n(int i , int  n)
{
    if(i>n)
        return;
    cout<<i<<"\n";
    
    print_one_to_n(i+1,n);

}

int main()
{
    int n;
    cin>>n;

    print_one_to_n(1,n);

    return 0;
}

