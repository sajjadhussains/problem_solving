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

    sort(arr,arr+n);
    int temp=0;
    int z=1;
    int count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            temp=arr[i];
            z=1;
        }
        else if(temp==arr[i]){
                z++;
            }
        else if(temp+1==arr[i]){
            count+=z;
            temp=arr[i];
            z=1;
        }
        else{
            temp=arr[i];
            z=1;
        }
    }
    cout<<count<<endl;
    return 0;
}