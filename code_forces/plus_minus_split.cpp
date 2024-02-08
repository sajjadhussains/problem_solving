#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int plus=0,minus=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='+'){
                plus++;
            }
            else if(str[i]=='-'){
                minus++;
            }
        }
        int minimum=min(plus,minus);
        cout<<n-(minimum*2)<<endl;
    }
    return 0;
}