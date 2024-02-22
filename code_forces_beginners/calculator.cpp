#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    int output;
    if(ch=='+'){
        output=a+b;
    }
    else if(ch=='-'){
        output=a-b;
    }
    else if(ch=='*'){
        output=a*b;
    }
    else{
        output=a/b;
    }
    cout<<output<<endl;
    return 0;
}