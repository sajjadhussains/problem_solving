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
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else{
             int minus_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==-1){
                minus_count++;
            }
        }
        int ans;
        if(minus_count==0){
            ans=n/2;
        }
        else if(minus_count>n/2){
          ans=minus_count-n/2;  
        }
        else{
            ans=n/2-minus_count;
        }
        
        cout<<ans<<endl;
        }
    }
}
