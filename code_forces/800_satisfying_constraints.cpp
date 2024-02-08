#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minimum=1,maximum=1e9+5;
        vector<int>not_equal;
        while(n--){
            int a,x;
            cin>>a>>x;
            if(a==1 && x>=minimum){
                minimum=x;
            }
            else if(a==2 && x<=maximum){
                maximum=x;
            }
            else if(a==3){
                not_equal.push_back(x);
            }
        }
        int numbers=(maximum-minimum)+1;
        for(auto num:not_equal){
            if(num>=minimum && num<=maximum){
                numbers--;
            }
        }
        if(minimum>maximum){
            cout<<0<<endl;
        }
        else{
            cout<<numbers<<endl;
        }
    }

    return 0;
}