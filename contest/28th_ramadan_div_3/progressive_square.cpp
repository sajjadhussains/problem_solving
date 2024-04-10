#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        int size=n*n;
        int arr[size];
        int mn=INT_MAX;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        int arr2[n][n];
        arr2[0][0]=mn;
        for(int i=0;i<n;i++){
            if(i!=0){
                arr2[i][0]=arr2[i-1][0]+c;
            }
            for(int j=1;j<n;j++){
                arr2[i][j]=arr2[i][j-1]+d;
            }
        }
        sort(arr,arr+size);
        int arr3[size];
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr3[k]=arr2[i][j];
                k++;
            }
        }
        sort(arr3,arr3+size);
        bool is_true=true;
        for(int i=0;i<size;i++){
            if(arr[i]!=arr3[i]){
                is_true=false;
                break;
            }
        }
        if(is_true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}