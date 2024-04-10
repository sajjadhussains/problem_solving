#include<bits/stdc++.h>

using namespace std;
long long count_sunk(long long a[],long long first,long long n){
    long long count=0;
    for(long long i=0;i<n;i++){
        if(first>=a[i]){
            count++;
            first-=a[i];
        }
        else{
            break;
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        long long sum=0;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        long long ans=0;
        if(sum<=k){
            cout<<n<<endl;
            continue;
        }
        long long first=k/2+(k%2);
        long long second=k/2;
        ans+=count_sunk(arr,first,n);
        reverse(arr,arr+n);
        ans+=count_sunk(arr,second,n);
        cout<<ans<<endl;
    }
    return 0;
}