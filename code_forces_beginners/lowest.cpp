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
    int minimum=arr[0];
    int pos=1;
    for(int i=1;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
            pos=i+1;
        }
    }
    cout<<minimum<<" "<<pos<<endl;
    return 0;
}