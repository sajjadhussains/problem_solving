//p_link:https://codeforces.com/problemset/problem/344/A

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
    int num_of_groups=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            num_of_groups++;
        }
    }
    cout<<num_of_groups<<endl;
    return 0;
}