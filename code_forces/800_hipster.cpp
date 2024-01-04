//https://codeforces.com/problemset/problem/581/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int total=a+b,ans1=0,ans2=0;
    while(total>=2){
        if(a!=0 && b!=0){
            ans1++;
            a--;
            b--;
            total-=2;
        }
        else{
            ans2++;
            total-=2;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}