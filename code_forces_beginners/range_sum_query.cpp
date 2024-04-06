#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,t;
    cin>>n>>t;
    long long arr1[n];
    long long arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        if(i==0){
            arr2[i]=arr1[i];
        }
        else{
            arr2[i]=arr1[i]+arr2[i-1];
        }
    }
    while (t--)     
    {
        int q,r;
        cin>>q>>r;
        q=q-1;
        r=r-1;
        long long sum=arr2[r]-arr2[q]+arr1[q];
        cout<<sum<<endl;
    }
    return 0;
}