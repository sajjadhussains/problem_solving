//https://codeforces.com/problemset/problem/61/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp1,inp2;
    cin>>inp1>>inp2;

    string ans="";
    for(int i=0;i<inp1.size();i++){
        if(inp1[i]==inp2[i]){
            ans+='0';
        }
        else{
            ans+='1';
        }
    }
    cout<<ans<<endl;
    return 0;
}