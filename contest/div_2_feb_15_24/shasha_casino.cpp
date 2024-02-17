#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,x,a;
        cin>>k>>x>>a;
        if(k+1>=x){
             int y=a-x;
             if(y==0){
                cout<<"NO"<<endl;
             }
            if(y<(k-1)*y){
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