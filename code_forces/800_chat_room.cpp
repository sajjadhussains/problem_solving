#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string s="hello";
    int x=0,y=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==s[x]){
            x++;
            y++;
        }
    }
    if(y==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}