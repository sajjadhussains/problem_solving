#include<bits/stdc++.h>

using namespace std;
bool reverse(int n){
    bool is_true=true;
    while(n!=0){
        int rem=n%10;
        if(rem!=4 and rem!=7){
            is_true=false;
            break;
        }
        n=n/10;   
    }
    return is_true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    bool uni_true=false;
    for(int i=a;i<=b;i++){
       if(reverse(i)){
        cout<<i<<" ";
        uni_true=true;
       }
    }
    if(uni_true){
        cout<<endl;
    }
    if(!uni_true){
        cout<<"-1"<<endl;
    }
    return 0;
}