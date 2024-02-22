#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int num=ch;
    char output;
    int result;
    if(num>=97 && num<=122){
        result=num-32;
    }
    else{
        result=num+32;
    }
    output=char(result);
    cout<<output<<endl;
    return 0;
}