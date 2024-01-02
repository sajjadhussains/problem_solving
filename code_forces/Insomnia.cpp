//https://codeforces.com/problemset/problem/148/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    
    if(k==1 || l==1 || m==1 || n==1){
        cout<<d<<endl;
    }
    else{
        bool arr[d+1];
        for(int i=1;i<=d;i++){
            arr[i]=false;
        }
        for(int i=1;i<=d;i++){
                if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
                    arr[i]=true;
                }
        }
        int ans=0;
        for(int i=1;i<=d;i++){
            if(arr[i]==true){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}