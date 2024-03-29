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
    bool is_palindrome=true;
    for(int i=0,j=n-1;i<n && j>=0;i++,j--){
        if(arr[i]!=arr[j]){
            is_palindrome=false;
            break;
        }
    }
    if(is_palindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}