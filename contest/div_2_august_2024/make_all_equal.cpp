#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int freq[101];
        for(int i=1;i<=100;i++){
            freq[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int max=0;
        int tricks=1;
        for(int i=1;i<=100;i++){
            if(freq[i]>max){
                max=freq[i];
            }
            if(freq[i]>0){
                tricks++;
            }
        }
       if(tricks>1){
         cout<<n-max<<endl;
       }
       else{
        cout<<0<<endl;
       }

    }
    return 0;
}