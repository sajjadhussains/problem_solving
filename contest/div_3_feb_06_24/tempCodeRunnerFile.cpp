#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int n,m,k;
        cin>>n>>m>>k;
        int arr1[n],arr2[m];
        set<int>result;
        int length1=0;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]<=k){
                if(length1==k/2){
                    break;
                }
                result.insert(arr1[i]);
                length1++;
            }
        }
        int length2=0;
         for(int i=0;i<m;i++){
            cin>>arr2[i];
            if(arr2[i]<=k){
                if(length2==k/2){
                    break;
                }
                result.insert(arr2[i]);
                length2++;
            }
        }
        if(length1==length2){
            if(result.size()==k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}