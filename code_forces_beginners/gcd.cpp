#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int min;
    if(a>=b){
        min=b;
    }
    int gcd=1;
    for(int i=1;i<=min;i++){
        if(a%i==0 and b%i==0){
            if(gcd<i){
                gcd=i;
            }
        }
    }
    cout<<gcd<<endl;
    return 0;
}