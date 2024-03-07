#include<bits/stdc++.h>

using namespace std;
bool find_prime(int num){
    bool is_prime=true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            is_prime=false;
            break;
        }
    }
    return is_prime;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(find_prime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}