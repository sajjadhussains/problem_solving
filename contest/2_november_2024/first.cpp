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
        bool isPerfect = true;
        for(int i=0;i<n-1;i++){
            int a=arr[i];
            int b=arr[i+1];
            int c=abs(a-b);
            if(c!=5 && c!=7){
                isPerfect=false;
                break;
            }
        }
        if(isPerfect){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}