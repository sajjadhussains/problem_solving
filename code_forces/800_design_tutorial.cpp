//https://codeforces.com/problemset/problem/472/A

#include<bits/stdc++.h>

using namespace std;

bool is_composite(int n){
    for(int i=2;i<n;i++){
        if(n%i==0 ){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=4;i<=n;i++){
        if(is_composite(i)==true && is_composite(n-i)==true){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    return 0;
}