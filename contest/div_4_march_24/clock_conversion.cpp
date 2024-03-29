#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int hour=0;
        int minute=0;
        int col_pos;
        for(int i=0;i<str.size();i++){
            if(str[i]==':'){
                col_pos=i;
                break;
            }
            hour=hour*10+(str[i]-'0');
        }
        for(int i=col_pos+1;i<str.size();i++){
            minute=minute*10+(str[i]-'0');
        }
        int output_hour;
        bool is_am=true;
        if(hour==0){
            output_hour=hour+12;
        }
        else if(hour>=12){
            if(hour==12){
                output_hour=hour;
            }
            else{
                output_hour=hour-12;
            }
            is_am=false;
        }
        else{
            output_hour=hour;
        }
        if(output_hour<10){
            cout<<"0"<<output_hour;
        }
        else{
            cout<<output_hour;
        }
        cout<<":";
        if(minute<10){
            cout<<"0"<<minute;
        }
        else{
            cout<<minute;
        }
        cout<<" ";
        if(is_am){
            cout<<"AM"<<endl;
        }
        else{
            cout<<"PM"<<endl;
        }
    }
    return 0;
}