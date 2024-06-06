#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    for(int i=1;;i++){
        if(i>n){
            cout<<i-1<<endl;
            return 0;
        }
        else{
            n-=i;
        }
    }
}