//https://codeforces.com/problemset/problem/1512/A

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
        int similar_indx;
        bool is_found=false;
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    similar_indx=i;
                    is_found=true;
                    break;
                }
                if(is_found){
                    break;
                }
            }
        }
        int ans;
        for(int i=0;i<n;i++){
            if(arr[similar_indx]!=arr[i]){
                ans=i;
                break;
            }
        }
        cout<<ans+1<<endl;
    }

    return 0;
}