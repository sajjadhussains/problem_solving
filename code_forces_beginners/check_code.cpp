#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    bool flag_sign=false,flag_digit=false;
    if(str[a]=='-'){
        flag_sign=true;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }
    if(a+b+1!=str.size()){
        cout<<"No"<<endl;
        return 0;
    }
    int counter=0;
    for(int i=0;i<str.size();i++){
        if(i==a)    continue;
        if(str[i]-'0'>=0 && str[i]-'0'<=9){
            flag_digit=true;
            counter++;
        }
        else{
            flag_digit=true;
            break;
        }
    }
    if(flag_digit==true && flag_sign==true && counter==a+b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}