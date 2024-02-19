#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int a_count=0,b_count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A'){
                a_count++;
            }
            else{
                b_count++;
            }
        }
        if(a_count>b_count){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}