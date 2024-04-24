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
        const int N=101;
        int count[N];
        for(int i=1;i<N;i++){
            count[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count[arr[i]]++;
        }
        int c=0;
        for(int i=1;i<N;i++){
            if(count[i]>2){
                c+=count[i]/3;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}