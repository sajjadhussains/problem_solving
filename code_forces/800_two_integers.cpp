//https://codeforces.com/problemset/problem/1409/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long diff=abs(a-b);
        if(diff%10==0){
            cout<<diff/10<<endl;
        }
        else{
            cout<<diff/10+1<<endl;
        }
    }
    return 0;
}