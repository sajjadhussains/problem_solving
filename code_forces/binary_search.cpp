#include<bits/stdc++.h>

using namespace std;
bool binary_search(int arr[],int x,int u){
    int l=0;
    while(l<=u){
        int mid=(l+u)/2;
        if(arr[mid]==x){
            return true;
        }
        else if(x>arr[mid]){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }
    return false;
}
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(q--){
        int x;
        cin>>x;
        bool is_found=binary_search(arr,x,n);
        if(is_found){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}