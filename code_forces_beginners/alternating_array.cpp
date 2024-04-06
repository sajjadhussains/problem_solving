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
    int count=0;
    int i=0;
    while(i<n-1){
        if((arr[i]<0 && arr[i+1]>0) || (arr[i]>0 && arr[i+1]<0)){
            // if((arr[i+1]>0 && arr[i+2]>0) ||(arr[i+1]<0 && arr[i+2]<0)){
            //     count++;
            // }
            i++;
            continue;
        }
        else{
            count++;
            i+=1;
        }
    }
    cout<<count<<endl;

    return 0;
}