// https://codeforces.com/problemset/problem/1922/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool is_true=true;
        for(int i=0;i<n;i++){
            if(a[i]==c[i] || b[i]==c[i]){
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
    }

    return 0;
}