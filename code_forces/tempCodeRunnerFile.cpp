//p_link:https://codeforces.com/problemset/problem/486/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i=i+2){
        sum+=-i;
        if(i!=n){
            sum+=i+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}