#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n++;
        int arr[n];
        for(int i=1;i<n;i++){
            cin>>arr[i];
        }
        long long minimum=1e12;
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(minimum>(arr[i]+arr[j]+j-i)){
                    minimum=arr[i]+arr[j]+j-i;
                }
            }
        }
        cout<<minimum<<endl;
    }
    return 0;
}