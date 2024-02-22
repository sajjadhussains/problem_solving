#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int num=int(ch);
    if(num>=65 && num<=90 || num>=97 && num<=122){
        cout<<"ALPHA"<<endl;
        if(num>=65 && num<=90){
            cout<<"IS CAPITAL"<<endl;
        }
        else{
            cout<<"IS SMALL"<<endl;
        }
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }

    return 0;
}