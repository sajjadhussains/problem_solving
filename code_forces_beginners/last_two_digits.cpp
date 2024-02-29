#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100; 
    int sum=a*b*c*d;
    int x1=sum%10;
    int x2=(sum%100)/10;
    cout<<x2<<x1<<endl;
    return 0;
}