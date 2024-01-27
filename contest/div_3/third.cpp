#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n],arr2[m];
        bool arr3[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        for(int i=0;i<m;i++){
            arr3[i]=false;
        }
        sort(arr,arr+n);
        sort(arr2, arr2 + m);

        int ans=0;
        for(int i=0;i<m;i++){
            int maximum=0,max_indx;
            for(int j=0;j<m;j++){
                if(maximum<abs(arr[i]-arr2[j])&& arr3[j]!=true){
                    maximum=abs(arr[i]-arr2[j]);
                    max_indx=j;
                }
            }
            arr3[max_indx]=true;
            ans+=maximum;
        }
        cout<<ans<<endl;
    }
    return 0;
}