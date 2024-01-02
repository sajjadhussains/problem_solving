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
    int max_indx=0,min_indx=0;
    for(int i=1;i<n;i++){
        if(arr[0]<arr[i]){
            max_indx=i;
        }
        if(arr[0]>arr[i]){
            min_indx=i;
        }
    }
    cout<<(max_indx+(n-min_indx))<<endl;

    return 0;
}