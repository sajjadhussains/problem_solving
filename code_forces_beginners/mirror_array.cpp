#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(n--){
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        for(int i=m-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}