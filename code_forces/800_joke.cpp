//https://codeforces.com/problemset/problem/141/A

#include<bits/stdc++.h>

using namespace std;
const int N=101;
int freq_arr[N];
int freq_arr2[N];

int main()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    
    for(int i=0;i<str1.size();i++){
        freq_arr[str1[i]-'0']++;
    }
    for(int i=0;i<str2.size();i++){
        freq_arr[str2[i]-'0']++;
    }
    for(int i=0;i<str3.size();i++){
        freq_arr2[str3[i]-'0']++;
    }
    bool is_true=true;
    for(int i=0;i<N;i++){
        if(freq_arr2[i]!=freq_arr[i]){
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