#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans;
        if(a>=b){
           ans=a; 
        }
        else if(a<b){
            if(b-a>a){
                ans=0;
            }
            else{
                
            while(b>=a){
                b-=(b-a)*2;
                a-=(b-a)*2;
            }
                ans=b;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}