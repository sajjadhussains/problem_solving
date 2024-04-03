#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int first_diagonal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j){
                first_diagonal+=arr[i][j];
            }
        }
    }
    int k=n-1;
    int m=0;
    int second_diagonal=0;
    while(k>=0 && m<n){
        second_diagonal+=arr[m][k];
        m++;
        k--;
    }
    cout<<abs(first_diagonal-second_diagonal)<<endl;

    return 0;
}