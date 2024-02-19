#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            v.push_back(str);
        }
        bool triangle=false;
        for(auto i:v){
             int ones_count=0;
            for(int j=0;j<i.size();j++){
                if(i[j]=='1'){
                    ones_count++;
                }
            }
            if(ones_count==1){
                triangle=true;
                break;
            }
        }
        if(triangle){
            cout<<"TRIANGLE"<<endl;
        }
        else{
            cout<<"SQUARE"<<endl;
        }
    }

    return 0;
}