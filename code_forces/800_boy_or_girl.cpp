//problem_link:https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int freq[125];
    for(int i=0;i<=123;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        int count=int(str[i]);
        freq[count]++;
    }
    int distinct_numbers=0;
    for(int i=0;i<=123;i++){
        if(freq[i]>=1){
            distinct_numbers++;
            // cout<<str[freq[i]+'0']<<endl;
        }
    }
    if(distinct_numbers%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}