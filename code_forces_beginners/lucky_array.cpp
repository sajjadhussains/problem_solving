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
    for(int i=1;i<n;i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    int min_count=0;
    for(int i=0;i<n;i++){
        if(minimum==arr[i]) min_count++;
    }
    if(min_count%2==0){
        cout<<"Unlucky"<<endl;
    }
    else{
        cout<<"Lucky"<<endl;
    }
   return 0;
}