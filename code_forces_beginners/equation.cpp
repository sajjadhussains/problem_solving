#include<bits/stdc++.h>

using namespace std;
long long equation(int n,int m){
    long long sum=0;
    for(int i=2;i<=m;i+=2){
        sum+=pow(n,i);
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    long long result=equation(n,m);
    cout<<result<<endl;

    return 0;
}