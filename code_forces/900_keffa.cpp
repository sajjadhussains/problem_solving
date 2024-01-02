
//https://codeforces.com/problemset/problem/580/A
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
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
        vector<int>result;
    int count=1;
   
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            if(i==n-2){
                result.push_back(count);
            }
        }
        else{
            result.push_back(count);
            count=1;
        }
    }
    int max=0;
    for(int i=0;i<result.size();i++){
        if(max<result[i]){
            max=result[i];
        }
    }
    cout<<max<<endl;
    }
    return 0;
}