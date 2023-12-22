//https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem?isFullScreen=true

#include<bits/stdc++.h>

using namespace std;
const int N= 20;
int grid[N][N];

long long leftCount(int i,int j){
    if(j-1<0 || j-2 <0 ||j-3<0){
        return -1;
    }
    else{
        int x=grid[i][j];
        return x*grid[i][j-1]*grid[i][j-2]*grid[i][j-3];
    }
}
long long rightCount(int i,int j){
    if(j+1>19 || j+2 >19 ||j+3>19){
        return -1;
    }
     else{
        int x=grid[i][j];
        return x*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
    }
}

long long upCount(int i,int j){
    if(i-1<0 || i-2 <0 ||i-3<0){
        return -1;
    }
    else{
        int x = grid[i][j];
        return x*grid[i-1][j]*grid[i-2][j]*grid[i-3][j];
    }
}
long long downCount(int i,int j){
    if(i+1>19 || i+2 > 19 ||i+3>19){
        return -1;
    }
     else{
        int x = grid[i][j];
        return x*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
    }
}
long long diagonal_left_up(int i,int j){
    if(i-1<0 || i-2<0 || i-3<0 || j-1<0 || j-2<0 || j-3<0){
        return -1;
    }
    else{
        return grid[i][j]*grid[i-1][j-1]*grid[i-2][j-2]*grid[i-3][j-3];
    }
}
long long diagonal_left_down(int i,int j){
    if(i+1>19 || i+2>19 || i+3>19 || j+1>19 || j+2>19 || j+3>19){
        return -1;
    }
    else{
        return grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
    }
}
long long diagonal_right_down(int i,int j){
    if(i+1>19 || i+2>19 || i+3>19 || j-1<0 || j-2<0 || j-3<0){
        return -1;
    }
    else{
        return grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];
    }
}
long long diagonal_right_up(int i,int j){
     if(i-1<0 || i-2<0 || i-3<0 || j+1>19 || j+2>19 || j+3>19){
        return -1;
    }
    else{
        return grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
    }
}

int main()
{
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            cin>>grid[i][j];
        }
    }
    long long max_num=-1;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            max_num=max(max_num,leftCount(i,j));
            max_num=max(max_num,rightCount(i,j));
            max_num=max(max_num,upCount(i,j));
            max_num=max(max_num,downCount(i,j));
            max_num=max(max_num,diagonal_left_down(i,j));
            max_num=max(max_num,diagonal_left_up(i,j));
            max_num=max(max_num,diagonal_right_down(i,j));
            max_num=max(max_num,diagonal_right_up(i,j));
            
        }
    }

    cout<<max_num<<endl;
    return 0;
}