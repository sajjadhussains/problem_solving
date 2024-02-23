#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int start_indx,end_indx;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                start_indx=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(arr[j]==1){
                end_indx=j;
                break;
            }
        }
        int ans=0;
        if(start_indx==end_indx){
            cout<<ans<<endl;
        }
        else{
            for(int i=start_indx;i<=end_indx;i++){
                if(arr[i]==0){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}