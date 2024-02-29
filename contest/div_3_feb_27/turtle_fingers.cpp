#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;
        int ta=a,tb=b;
        int x=1,y=1;
        while(a<l){
            if(l%a==0)
                x++;
            else
                break;
            a=a*ta;
        }
        while(b<l){
            if(l%b==0){
                y++;
            }
            else{
                break;
            }
            b=b*tb;
        }
        set<int>s;
        // int ans=0;
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                int z=pow(ta,i)*pow(tb,j);
                if(z<=l && l%z==0)
                s.insert(l/z);
            }
        }
        cout<<s.size()<<endl;
    }

    return 0;
}