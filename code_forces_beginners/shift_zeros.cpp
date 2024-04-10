#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num_zeros=0,last_pos_zeros;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            num_zeros++;
            last_pos_zeros=i;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            continue;
        }
        cout<<arr[i]<<" ";
    }
    // for(int j=last_pos_zeros+1;j<n;j++){
    //     cout<<arr[j]<<" ";
    // }
    for(int i=1;i<=num_zeros;i++){
        cout<<"0";
        if(i!=num_zeros){
            cout<<" ";
        }
    }
    // cout<<2;
    cout<<endl;
    return 0;
}