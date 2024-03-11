#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int max,min;
    if(a>b){
        max=a;
        min=b;
    }
    else if(a<b){
        max=b;
        min=a;
    }
    else{
        max=a;
        min=b;
    }
    int coff=max/min;
    int rem=max%min;
    while(rem!=0){
        max=min;
        min=rem;
        coff=max/min;
        rem=max%min;
    }
    cout<<min<<endl;
    return 0;
}