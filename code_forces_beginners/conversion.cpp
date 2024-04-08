#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]==','){
            str[i]=' ';
        }
        else if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}