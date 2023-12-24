//p_link:https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='4' || str[i]=='7'){
            ans++;
        }
    }
    if(ans==4 or ans == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}