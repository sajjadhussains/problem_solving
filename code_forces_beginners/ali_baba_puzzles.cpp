#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int e1=a+b-c;
    long long int e2=a-b+c;
    long long int e3=a*b+c;
    long long int e4=a+b*c;
    long long int e5=a-b*c;
    long long int e6=a*b-c;
    if(e1==d || e2==d || e3==d || e4==d || e5==d || e6==d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
    return 0;
}