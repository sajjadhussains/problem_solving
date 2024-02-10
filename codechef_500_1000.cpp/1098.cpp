#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int max=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=x && b>max){
                max=b;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}