#include<bits/stdc++.h>
using namespace std;
// print n --> 1 withpur - sign;
// parameerized

void fun_without(int i,int n)
{
    if(i>n)
        return;
    fun_without(i+1,n);
    cout<<i<<"\n";

}

int main()
{
    int n;
    cin>>n;

    fun_without(1,n);

    return 0;
}


