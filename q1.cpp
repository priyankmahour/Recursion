#include<bits/stdc++.h>
using namespace std;

// parameterized recursion call;

void print_name(int i,int n,string name)
{
    if(i==n)
        return;
    cout<<name<<"\n";
    print_name(i+1,n,name);

}

int main()
{
    int n;
    cin>>n;
    string name;
    cin>>name;
    cout<<"output:- "<<"\n";
    print_name(0,n,name);

    return 0;
}



