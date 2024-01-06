//https://codeforces.com/problemset/problem/1676/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sum1=0,sum2=0;
        for(int i=0,j=str.size()-1;i<=j;i++,j--){
            sum1+=str[i]-'0';
            sum2+=str[j]-'0';
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}