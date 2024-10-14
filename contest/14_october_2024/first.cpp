#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        int total_family=0;
        int rest_mem=0;
        for(int i=0;i<n;i++){
            total_family+=arr[i];
            if(arr[i]%2!=0 && arr[i]!=1){
                ans+=(arr[i]/2)*2;
                rest_mem+=arr[i]%2;
            }
            else if(arr[i]==1){
                rest_mem+=1;
            }
            else{
                ans+=arr[i];
            }
        }
        
        if(ans<total_family){
            int covered=ans/2;
            int rest = r-covered;
            if(rest_mem<=rest){
                ans+=rest_mem;
            }
            else if(rest_mem<rest*2){
               ans+=(rest*2)-rest_mem;
            }
            
        }
        
        cout<<ans<<endl;
    }
    return 0;
}