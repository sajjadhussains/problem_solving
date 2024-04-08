#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count;
    if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z')){
        count=1;
    }
    else{
        count=0;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]==' ' && (str[i+1]>='a' && str[i+1]<='z')||(str[i+1]>='A' && str[i+1]<='Z')){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}