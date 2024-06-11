#include<bits/stdc++.h>

using namespace std;

bool findGood(int k,int *arr2){
   int size=k+1;
   int arr[size];
   for(int i=0;i<size;i++){
    arr[i]=arr2[i];
   }
   sort(arr,arr+size);
   int max=arr[size-1];
   long long sum=0;
//    cout<<k<<endl;
   for(int i=0;i<k;i++){
    sum+=arr[i];
   }
   if(max!=sum){
    return false;
   }
   else{
    return true;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int good=0;
        if(arr[0]==0){
            good++;
        }
        if(arr[0]==arr[1]){
            good++;
        }
        if(n>=3){
            for(int i=2;i<n;i++){
                if(findGood(i,arr)){
                    good++;
                }
            }
        }
        cout<<good<<endl;
    }

    return 0;
}