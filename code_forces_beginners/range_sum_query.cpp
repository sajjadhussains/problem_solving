#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (t--)     
    {
        int q,r;
        cin>>q>>r;
        q=q-1;
        r=r-1;
        long long int sum=0;
        for(int i=q;i<=r;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}