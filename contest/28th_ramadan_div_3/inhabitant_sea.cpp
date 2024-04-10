#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long pos=0;
        long long l_pos=n-1;
        for(int i=1;i<=k;i++){
            if(i%2!=0){
                if(arr[pos]>0){
                    arr[pos]--;
                    if(arr[pos]==0){
                        pos++;
                    }
                }
            }
            else{
                if(arr[l_pos]>0){
                    arr[l_pos]--;
                    if(arr[l_pos]==0){
                        l_pos--;
                    }
                }
            }
        }
        long long ans=(l_pos-pos)+1;
        cout<<n-ans<<endl;
    }
    return 0;
}

//By this solution problem will be solved but we have to compress the time complexity of the code.