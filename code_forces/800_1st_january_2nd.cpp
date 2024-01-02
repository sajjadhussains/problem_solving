//https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    set<int>alp;
    for(int i=0;i<s.size();i++){
        char upper=toupper(s[i]);
        alp.insert(upper-'0');
    }
    // cout<<alp.size()<<endl;
    if(alp.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}