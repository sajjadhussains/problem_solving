//https://codeforces.com/problemset/problem/1367/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int length=str.size()-2;
        string a="";
        for(int i=0;i<length;i+=2){
            a+=str[i];
        }
        a+=str[length];
        a+=str[length+1];
        cout<<a<<endl;
    }
    return 0;
}