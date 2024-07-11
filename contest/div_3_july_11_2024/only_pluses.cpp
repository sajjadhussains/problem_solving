#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<5;i++){
            int res = min({a,b,c});
            if(a==res) a++;
            else if (b==res) b++;
            else c++;
        }
        cout<<a*b*c<<endl;
    }

    return 0;
}