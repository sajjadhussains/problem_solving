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
    bool is_odd=false;
    int count=0;
    while(true){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                is_odd=true;
                break;
            }
            arr[i]=arr[i]/2;
        }
        if(is_odd==false){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}