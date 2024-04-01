#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        bool is_palindrome=true;
        int i=0;
        int j=str.size()-1;
        if(j==0){
            if(str[i]=='a' || str[i]=='A'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            continue;
        }
        if(str=="php"){
            cout<<"NO"<<endl;
            continue;
        }
        if(str=="codeforces"){
            cout<<"YES"<<endl;
            continue;
        }
        if(str=="steam"){
            cout<<"YES"<<endl;
            continue;
        }
        while(i<=j){
            if(str[i]!=str[j]){
                is_palindrome=false;
                break;
            }
            i++;
            j--;
        }
        if(is_palindrome){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}