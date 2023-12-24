//https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int str_size=str.size();
    int capital=0;
    for(int i=0;i<str_size;i++){
        if(str[i]>=65 && str[i]<=90){
            capital++;
        }
    }
    int small=str_size-capital;
    if(capital>small){
        for(int i=0;i<str_size;i++){
            str[i]=toupper(str[i]);
        }
    }
    else{
        for(int i=0;i<str_size;i++){
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}