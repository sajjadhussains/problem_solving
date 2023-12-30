//https://codeforces.com/problemset/problem/133/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    char ch1='H',ch2='Q',ch3='9',ch4='+';
    bool is_true=false;
    for(int i=0;i<str.size();i++){
        if(str[i]==ch1 || str[i]==ch2 || str[i]==ch3){
            is_true=true;
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