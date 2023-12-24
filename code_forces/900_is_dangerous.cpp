//problem-link:

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int is_seven=0;
    bool is_dangerous=false;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            is_seven++;
            if(is_seven==6){
                is_dangerous=true;
                break;
            }
        }
        else if(str[i]!=str[i+1]){
            is_seven=0;
        }
    }
    // cout<<is_seven<<endl;
    if(is_dangerous){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}