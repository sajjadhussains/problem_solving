#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    x=x-1;
    y=y-1;
    bool is_true=true;
    if(arr[x-1][y-1]!='x') is_true=false;
    if(arr[x][y-1]!='x')   is_true=false;
    if(arr[x+1][y]!='x')    is_true=false;
    if(arr[x+1][y+1]!='x')  is_true=false;
    if(arr[x-1][y]!='x')    is_true=false;
    if(arr[x-1][y+1]!='x')  is_true=false;
    if(arr[x][y+1]!='x')    is_true=false;
    if(arr[x+1][y+2]!='x')  is_true=false;

    if(is_true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}