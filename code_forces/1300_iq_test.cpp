#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    int even_numbers=0,odd_numbers=0;
    for(int i=1;i<n+1;i++){
        if(arr[i]%2==0){
            even_numbers++;
        }
        else{
            odd_numbers++;
        }
    }
    bool is_even=true,is_odd=true;
    if(even_numbers>1){
        is_even=false;
    }
    else if(is_odd>1){
        is_odd=false;
    }
    int result;
    if(is_even){
        for(int i=1;i<n+1;i++){
            if(arr[i]%2==0){
                result=i;
                break;
            }
        }
    }
    else{
        for(int i=1;i<n+1;i++){
            if(arr[i]%2!=0){
                result=i;
                break;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}