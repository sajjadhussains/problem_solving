#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int maximum=max(n,m);
        int minimum=min(n,m)+1;
        int sum=0;
        for(int i=minimum;i<maximum;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}