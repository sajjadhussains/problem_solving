#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int min=1e5;
    int max=-1e5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            cout<<min<<" ";
        }
        else if(arr[i]==min){
            cout<<max<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    return 0;

}