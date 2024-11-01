#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sz=2*n;
        int arr[sz];
        int ones=0;
        int zeros=0;
        for(int i=0;i<sz;i++){
            cin>>arr[i];
            if(arr[i]==0){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(zeros==0){
            cout<<"0 0"<<endl;
        }
        else{
            if(zeros>=ones){
                cout<<(zeros%2)<<" "<<ones<<endl;
            }
            else{
                cout<<ones%2<<" "<<zeros<<endl;
            }
        }
    }
    return 0;
}