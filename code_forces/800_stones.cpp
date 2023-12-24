//https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0,index=0;
    while(index!=n-1){
        if(str[index]==str[index+1]){
            ans++;
        }
        index++;
    }
    cout<<ans<<endl;
    return 0;
}