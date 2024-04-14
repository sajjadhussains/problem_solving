#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr1[n],arr2[q];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<q;i++){
            cin>>arr2[i];
            if(arr2[i]>=arr1[0]){
                cout<<arr1[0]-1<<" ";
            }
            else{
                cout<<arr2[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}