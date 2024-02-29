#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,a;
    cin>>n>>k>>a;
    if(((n*k)%a)==0){
        if(((n*k)/a)>2147483647){
            // cout<<((n*k)/a)<<endl;
            cout<<"long long"<<endl;
        }
        else{
            // cout<<((n*k)/a)<<endl;
            cout<<"int"<<endl;
        }
    }
    else{
        // cout<<((n*k)/a)<<endl;
        cout<<"double"<<endl;
    }
    return 0;
}