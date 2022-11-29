#include<bits/stdc++.h>
using namespace std;

// print 1 --> n withput using +1 sign
// parameterized recursion
void func_without_1(int n)
{
    if(n<1)
        return;
    func_without_1(n-1);
    cout<<n<<"\n";

}

int main()
{
    int n;
    cin>>n;
    func_without_1(n);  

    return 0;
}
