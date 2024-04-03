#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr1[N],arr2[N];
    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }
    sort(arr1,arr1+N);
    for(int i=0;i<N;i++){
        cin>>arr2[i];
    }
    sort(arr2,arr2+N);
    int flag=1;
    for(int i=0;i<N;i++){
        if(arr1[i]!=arr2[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
    
}