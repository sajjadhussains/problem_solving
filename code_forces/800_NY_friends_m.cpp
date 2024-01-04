// https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int output;
    if((b>=a && a>=c)||(b<=a && a<=c)){
        output=abs(b-a)+abs(a-c);
    }
    else if((a>=b && b>=c)||(a<=b && b<=c)){
        output=abs(b-a)+abs(b-c);
    }
    else{
        output=abs(c-a)+abs(c-b);
    }
    cout<<output<<endl;

    return 0;
}