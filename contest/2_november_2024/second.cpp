#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[k+1];
        for(int i=1;i<=k;i++){
            arr[i]=0;
        }
        for(int i=1;i<=k;i++){
            int bi,ci;
            cin>>bi>>ci;
            arr[bi]+=ci;
        }
        sort(arr, arr + k+1, std::greater<int>());
        int K=0;
        for(int i=1;i<=k;i++){
            if(arr[i]==0){
                break;
            }
            K++;
        }
        int ans=0;
        for(int i=1;i<=n && i<=K;i++){
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}