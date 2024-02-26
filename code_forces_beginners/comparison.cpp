#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    bool right=true;
    if(ch=='>'){
        if(a>b!=true){
          right=false;  
        }
    }
    else if(ch=='<'){
        if(a<b != true){
            right=false;
        }
    }
    else if(ch=='='){
        if(a==b != true){
            right=false;
        }
    }
    if(right){
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }

    return 0;
}