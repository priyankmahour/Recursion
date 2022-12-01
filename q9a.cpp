#include<bits/stdc++.h>
using namespace std;


bool palin_iter(string &word)
{
    int n=word.size();

    for(int i=0;i<(n/2);i++)
    {
        if(word[i]!=word[n-i-1])
            return false;
    }
    return true;

}

int main()
{
    string word;
    cin>>word;


    if(palin_iter(word))
        cout<<"palindrome"<<"\n";
    else
        cout<<"NOT palindrome"<<"\n";

    return 0;
}


