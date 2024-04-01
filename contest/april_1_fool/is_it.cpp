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
        for(int i=0;i<str.size();i++){
            if(str[i]=='i' and str[i+1]=='t'){
                is_true=true;
                break;
            }
        }
        if(is_true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}