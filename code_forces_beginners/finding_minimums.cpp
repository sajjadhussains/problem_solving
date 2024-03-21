#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=0;
    int count;
    if(n%k==0){
        count=n/k;
    }
    else{
        count=n/k+1;
    }
    int g=0;
    while(g<count){
        long long minimum=1e10;
        for(int i=m;i<k;i++){
            if(minimum>arr[i]){
                minimum=arr[i];
            }
        }
        cout<<minimum<<" ";
        m+=k;
        k+=k;
        g++;
    }
    cout<<endl;
    return 0;
}