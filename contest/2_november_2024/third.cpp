#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int idx;
            cin>>idx;
            char ch;
            cin>>ch;
            idx--;
            str[idx]=ch;
            int sz= str.length();
            if(sz<4){
                cout<<"NO"<<endl;
            }
            else{
                int k=sz-4;
                bool isBeauti=false;
                for(int i=0;i<=k;i++){
                    if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='0' && str[i+3]=='0'){
                        isBeauti=true;
                        break;
                    }
                }
                if(isBeauti){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}