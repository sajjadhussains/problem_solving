#include<bits/stdc++.h>

using namespace std;
const int N=1e3;
int arr[N][N];
void swap_matrix(int x,int y,int n){
    x--,y--;
    for(int j=0;j<n;j++){
        int temp=arr[x][j];
        arr[x][j]=arr[y][j];
        arr[y][j]=temp;
    }
    for(int j=0;j<n;j++){
        int temp=arr[j][x];
        arr[j][x]=arr[j][y];
        arr[j][y]=temp;
    }
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    swap_matrix(x,y,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}