//https://codeforces.com/problemset/problem/758/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=max){
            int more_req=max-arr[i];
            ans+=more_req;
        }
    }
    cout<<ans<<endl;

    return 0;
}