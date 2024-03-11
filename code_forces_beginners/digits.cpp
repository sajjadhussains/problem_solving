#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<"0"<<endl;
        }
        else{
            while(n!=0){
            int rem=n%10;
            cout<<rem<<" ";
            n/=10;
        }
        cout<<endl;
        }
    }
    return 0;
}