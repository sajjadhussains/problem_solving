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
    int first=n/k;
    int m=1;
    int j=0;
    while(m<=first){
        long long minimum=1e10;
        for(j;j<k*m;j++){
            if(minimum>arr[j]){
                minimum=arr[j];
            }
        }
        cout<<minimum<<" ";
        m++;
        // j+=k;
    }
    m--;
    if(n%k!=0){
        long long minimum=1e10;
        for(int i=m*k;i<n;i++){
            if(minimum>arr[i]){
                minimum=arr[i];
            }
        }
        cout<<minimum<<endl;
    }
    return 0;
}