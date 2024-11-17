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
        sort(arr,arr+n);
        bool is_true = false;
        int count = 0;
        int k=0;
        while(k<n-1){
            if(arr[k]==arr[k+1]){
                is_true=true;
                k+=2;
                count++;
            }
            else{
                k+=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}