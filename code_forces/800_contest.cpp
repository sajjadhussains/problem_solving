//https://codeforces.com/problemset/problem/155/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    int amazing=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            amazing++;
            max=arr[i];
        }
        else if(arr[i]<min){
            amazing++;
            min=arr[i];
        }
    }
    cout<<amazing<<endl;

    return 0;
}