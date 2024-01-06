//https://codeforces.com/problemset/problem/1343/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<"NO"<<endl;
        }
        else{
            vector<int>arr;
            int k=2,target_sum=0,j=1,odd_target_sum=0;
            for(int i=1;i<=n/2;i++){
                arr.push_back(k);
                target_sum+=k;
                k+=2;
            }
            for(int i=1;i<=(n/2)-1;i++){
                arr.push_back(j);
                odd_target_sum+=j;
                j+=2;
            }
            int diff=target_sum-odd_target_sum;
            if(diff%2!=0){
                cout<<"YES"<<endl;
                arr.push_back(diff);
                for(int i:arr){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}