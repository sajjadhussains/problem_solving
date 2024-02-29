#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%3==0){
            cout<<0<<endl;
        }
        else{
            int got2=0;
            for(int i=0;i<n;i++){
                int rem=sum-arr[i];
                if(rem%3==0){
                    got2=1;
                    break;
                }
            }
            if(got2==1){
                cout<<1<<endl;
            }
            else{
                int temp=sum%3;
                temp=3-temp;
                if(temp<2){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
            }
        }
    }

    return 0;
}