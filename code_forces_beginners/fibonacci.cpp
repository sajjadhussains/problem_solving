#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int fibo[45];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(int i=0;i<n;i++){
        cout<<fibo[i]<<" ";
    }
    cout<<endl;
    return 0;
}