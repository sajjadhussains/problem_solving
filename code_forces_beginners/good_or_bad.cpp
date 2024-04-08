#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        bool is_true=false;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='1'){
                if(str[i+1]=='0' && str[i+2]=='1'){
                    is_true=true;
                    break;
                }
            }
            else if(str[i]=='0'){
                if(str[i+1]=='1' && str[i+2]=='0'){
                    is_true=true;
                    break;
                }
            }
        }
        if(is_true){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }

    return 0;
}