#include<bits/stdc++.h>

using namespace std;
int result[1000005];
int main()
{
    int t;
    cin>>t;
    long long cou=0;
    while(t--){
        long long n,s;
        cin>>n>>s;
        if(n*(n+1)/2<s){
            cout<<-1;
        }
        else{
            long long sum=0;
            for(int z=n;z>=1;z--){
                if(sum+z<=s){
                    sum+=z;
                    result[cou]=z;
                    cou++;
                }
                if(sum==s){
                    break;
                }
            }
        }
        for(int k=0;k<cou;k++){
            cout<<result[k]<<" ";
        }
        cout<<endl;
        cou=0;
    }
    return 0;
}