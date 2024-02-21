#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    string o_str1="";
    string o_str2="";
    for(int i=str1.size()-1;i>=0;i--){
        if(str1[i]==' '){
            break;
        }
        o_str1+=str1[i];
    }
     for(int i=str2.size()-1;i>=0;i--){
        if(str2[i]==' '){
            break;
        }
        o_str2+=str2[i];
    }
    if(o_str1==o_str2){
        cout<<"ARE Brothers"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }

    return 0;
}