#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int total_diagonal=4*n-2;
        int ans;
        if(d<total_diagonal){
            if(d%2==0){
                ans=d/2;
            }
            else{
                ans=(d/2)+1;
            }
        }
        else{
            ans=d/2+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}