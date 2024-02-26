#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    char ch1,ch2;
    cin>>a>>ch1>>b>>ch2>>c;
    bool is_yes=false;
    int output;
    if(ch1=='+'){
        if(a+b==c){
            is_yes=true;
        }
        else{
            output=a+b;
        }
    }
    else if(ch1=='-'){
        if(a-b==c){
            is_yes=true;
        }
        else{
            output=a-b;
        }
    }
    else{
        if(a*b==c){
            is_yes=true;
        }
        else{
            output=a*b;
        }
    }
   
    if(is_yes){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<output<<endl;
    }
    return 0;
}