#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int reversed_order=0;
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        reversed_order=reversed_order*10+rem;
        temp/=10;
    }
    cout<<reversed_order<<endl;
    if(n==reversed_order){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}