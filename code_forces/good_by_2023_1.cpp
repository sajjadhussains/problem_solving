#include<bits/stdc++.h>

using namespace std;

int main()
{
    const long long N=1e9+5;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long i=b;
        while(i++){
            if(a==1){
                i=b*b;
                break;
            }
            else if(i%b==0 && i%a==0){
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}