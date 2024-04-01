#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    bool is_found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                is_found=true;
                break;
            }
        }
        if(is_found){
            break;
        }
    }
    if(is_found){
        cout<<"will not take number"<<endl;
    }
    else{
        cout<<"will take number"<<endl;
    }

    return 0;
}