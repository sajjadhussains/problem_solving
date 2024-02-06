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
        int first_indx;
        int last_indx;
        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                first_indx=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='B'){
                last_indx=i;
                break;
            }
        }
        cout<<(last_indx-first_indx)+1<<endl;
    }

    return 0;
}