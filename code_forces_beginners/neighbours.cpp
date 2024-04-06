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
    x--,y--;
    int dy[8]={0,1,-1,-1,-1,1,1,1};
    int dx[8]={-1,1,-1,0,1,-1,0,1};
    bool is_true=true;
    for(int i=0;i<8;i++){
        int new_x=x+dx[i];
        int new_y=y+dy[i];
        if((new_x>=0 && new_x<n) && (new_y>=0 && new_y<m)){
            // cout<<new_x<<","<<new_y<<endl;
            if(arr[new_x][new_y]!='x'){
                // cout<<new_x<<","<<new_y<<endl;
                is_true=false;
                break;
            }
        }
    }
    if(is_true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}