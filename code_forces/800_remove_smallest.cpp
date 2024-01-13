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
        sort(arr,arr+n);
        bool is_possible=false;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>1){
                is_possible=true;
                break;
            }
        }
        if(is_possible){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}