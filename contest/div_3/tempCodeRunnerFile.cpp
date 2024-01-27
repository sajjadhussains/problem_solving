#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>>arr;
        for(int i=0;i<4;i++){
            int x,y;
            cin>>x>>y;
            arr.push_back({x,y});
        }
        int a,b;
        bool is_true=false;
        for(int i=0;i<3;i++){
            for(int j=1;j<4;j++){
                if(arr[i].first==arr[j].first){
                    a=arr[i].second;
                    b=arr[j].second;
                    is_true=true;
                    break;
                }
                if(is_true){
                    break;
                }
            }
        }
        int diff=abs(a-b);
        cout<<diff*diff<<endl;

    }
    return 0;
}