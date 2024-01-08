//https://codeforces.com/problemset/problem/432/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int valid_p_nums=0;
    for(int i=0;i<n;i++){
        if(5-arr[i]>=k){
            valid_p_nums++;
        }
    }
    cout<<valid_p_nums/3<<endl;

    return 0;
}