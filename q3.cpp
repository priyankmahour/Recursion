#include<bits/stdc++.h>
using namespace std;

// parameterized recursion
void print_n_to_one(int n)
{
    if(n<1)
        return;
    cout<<n<<"\n";
    print_n_to_one(n-1);


}

int main()
{
    int n;
    cin>>n;
    print_n_to_one(n);

    return 0;
}

