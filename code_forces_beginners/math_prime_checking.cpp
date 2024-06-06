#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    bool is_prime=true;
    if(n==0 || n==1){
        is_prime=false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    if(is_prime){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}