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
        int minimum=arr[0];
        for(int i=1;i<n;i++){
            if(minimum>arr[i]){
                minimum=arr[i];
            }
        }
        int min_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==minimum){
                min_count++;
            }
        }
        if(min_count==n){
            cout<<"NO"<<endl;
        }
        else if(min_count==1){
            cout<<"YES"<<endl;
        }
        else{
            int flag=1;
            for(int i=0;i<n;i++){
                if(minimum!=arr[i]){
                    if(arr[i]%minimum!=0){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag!=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}