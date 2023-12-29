//p_link:

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    long long s;
    if(n%2==0){
        s=n/2;
    }
    else{
        s=(n/2)+1;
    }
    long long odd=1;
    for(int i=1;i<=s;i++){
        arr[i]=odd;
        odd=odd+2;
    }
    long long even=2;
    for(int i=s+1;i<=n;i++){
        arr[i]=even;
        even=even+2;
    }
    cout<<arr[k]<<endl;
    return 0;
}