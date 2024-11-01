#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        int s_length=s.length();
        int t_length=t.length();
        int similar=0;
        int common_length;
        if(s_length>t_length){
            common_length=s_length;
        }
        else if(s_length<t_length){
            common_length=t_length;
        }
        else{
            common_length=s_length;
        }
        for(int i=0;i<common_length;i++){
            if(s[i]==t[i]){
                similar++;
            }
            else{
                break;
            }
        }
        if(similar==0){
            cout<<(similar+(s_length-similar)+(t_length-similar))<<endl;
        }
        else{
            cout<<(similar+(s_length-similar)+(t_length-similar)+1)<<endl;
        }
    }

    return 0;
}