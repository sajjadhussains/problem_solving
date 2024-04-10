#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=x;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>=1;j--){
            arr[j]=arr[j-1];  
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}