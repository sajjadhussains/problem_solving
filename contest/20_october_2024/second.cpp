#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=k;
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1] && sum<=k){
                ans++;
                
            }
            sum+=arr[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}