#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=10 && arr[i]<=60){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
