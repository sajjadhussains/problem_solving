//problem_link:https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool is_girl=true;
    for(int i=0;i<str.size();i++){
        int distinct_numbers=str[i]-'0';
        if(distinct_numbers%2!=0){
            is_girl=false;
            break;
        }
    }
    if(is_girl){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}