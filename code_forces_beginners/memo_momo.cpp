#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a%c==0 and b%c==0){
        cout<<"Both"<<endl;
    }
    else if(a%c==0 and b%c!=0){
        cout<<"Memo"<<endl;
    }
    else if(a%c!=0 and b%c==0){
        cout<<"Momo"<<endl;
    }
    else{
        cout<<"No One"<<endl;
    }

    return 0;
}