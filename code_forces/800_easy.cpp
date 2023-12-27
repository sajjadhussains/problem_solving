#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool is_easy=true;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a==1){
            is_easy=false;
            break;
        }
    }
    if(is_easy){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }

    return 0;
}