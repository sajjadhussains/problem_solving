#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long int l,r;
        cin>>l>>r;
        long long int mi=min(l,r);
        long long int ma=max(l,r);
        long long int sum=(ma*(ma+1))/2;
        // cout<<sum<<endl;
        mi=mi-1;
        long long int s=(mi*(mi+1))/2;
        // cout<<s<<endl;
        cout<<sum-s<<endl;
        
    }
    return 0;
}