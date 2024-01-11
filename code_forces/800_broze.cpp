//https://codeforces.com/problemset/problem/32/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string num;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            num+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            num+='1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            num+='2';
            i++;
        }
    }
    cout<<num<<endl;

    return 0;
}