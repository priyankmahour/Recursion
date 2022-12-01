#include<bits/stdc++.h>
using namespace std;

bool palin_rec(int i,string &word)
{
    int n=word.size();
    if(i>=n/2)
        return true;
    
    if(word[i]!=word[n-i-1])
        return false;

    return palin_rec(i+1,word);

}

int main()
{
    string word;
    cin>>word;

    if(palin_rec(0,word))
        cout<<"Palindrome"<<"\n";
    else
        cout<<"NOT Palindrome"<<"\n";

    return 0;
}


