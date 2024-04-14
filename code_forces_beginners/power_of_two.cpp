#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin>>N;
    long long i=N;
    while(i%2==0){
        i=i/2;
    }
    if(i==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}