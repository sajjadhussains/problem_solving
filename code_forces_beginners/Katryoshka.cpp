#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int ans=0;
    if(a==0 or c==0){
        ans=0;
    }
    else if(b==0){
        a=a/2;
        long long int minimum=min({a,c});
        ans=minimum;
    }
    else{
        long long int min_mum=min({a,b,c});
        ans+=min_mum;
        a=a-min_mum;
        b=b-min_mum;
        c=c-min_mum;
        if(a==0 or c==0){
            ans=ans;
        }
        else if(b==0){
            a=a/2;
            if(a==0){
                ans=ans;
            }
            else{
                long long int minimum=min({a,c});
                ans+=minimum;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}