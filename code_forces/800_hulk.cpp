//https://codeforces.com/problemset/problem/705/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1="I hate",s2="I love";
    string ans="";
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            ans+=s1;
        }
        else{
            ans+=s2;
        }
        if(i!=n){
            ans+=" that ";
        }
    }
    ans+=" it";
    cout<<ans<<endl;
    return 0;
}