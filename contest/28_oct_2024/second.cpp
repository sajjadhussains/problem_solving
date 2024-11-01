#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int ans;
        if(n==1||n==2){
            ans=1;
        }
        else{
            if(n%2==0){
                ans=n/2;
            }
            else{
                ans=n/2+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}