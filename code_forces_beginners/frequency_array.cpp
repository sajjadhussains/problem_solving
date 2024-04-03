#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int M=m+1,N=n+1;
    int arr[N],freq[M];
    for(int i=1;i<M;i++){
        freq[i]=0;
    }
    for(int i=1;i<N;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i=1;i<M;i++){
        cout<<freq[i]<<endl;
    }
    return 0;
}