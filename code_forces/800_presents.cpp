#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    
   for(int i=1;i<=n;i++){
    int p;
    cin>>p;
    arr1[p]=i;
   }
   for(int i=1;i<=n;i++){
    cout<<arr1[i]<<" ";
   }
   cout<<endl;
   return 0;
    
}