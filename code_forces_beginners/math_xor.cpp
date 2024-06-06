#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,q,result;
    cin>>a>>b>>q;
    if(q%3==1){
        result=a;
    }
    else if(q%3==2){
        result=b;
    }
    else{
        result= a ^ b;
    }
    cout<<result<<endl;
    return 0;
}