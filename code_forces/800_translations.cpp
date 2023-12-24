//p_link:https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    bool is_true=true;
    for(int i=0,j=t.size()-1;i<s.size() && j>=0;i++,j--){
        if(s[i]!=t[j]){
            is_true=false;
            break;
        }
    }
    if(is_true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}