#include<bits/stdc++.h>

using namespace std;
const int size = 1e5+5;
int arr[size];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+1+k);
        int result = n - arr[k];
        for(int i=1;i<k;i++){
            result +=arr[i]-1;
        }
        cout<<result<<endl;
    }
    return 0;
}