#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]=='\\'){
            break;
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl;

    return 0;
}