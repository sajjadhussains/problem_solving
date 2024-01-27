#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s1,s2;
       cin>>s1>>s2;
       int diff=0;
       for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            diff++;
        }
       }
       int ans;
       if(diff==1){
        ans=1;
       }
       else if(diff%2!=0 && n!=diff){
        ans=diff-1;
       }
       else if(diff%2!=0 && n==diff){
        ans=diff;
       }
       else{
        ans=diff/2;
       }
       cout<<ans<<endl;
    }
    return 0;
}