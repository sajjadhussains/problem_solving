#include<bits/stdc++.h>

using namespace std;

struct S{
    int x;
    int z;
};
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string str;
        cin>>str;
        vector<bool>vec_s(n+2,false);
        queue<S> q;
        q.push({0,0});
        vec_s[0]=true;
        bool cec_r = false;
        while(!cec_r && !q.empty()){
            S c = q.front();
            q.pop();
            int x = c.x;
            int z = c.z;

            if(x==0 || str[x-1]=='L'){
                for(int j=1;j<=m;++j){
                    int np = x+j;
                    if(np == n+1){
                        cec_r = true;
                        break;
                    }
                    if(np<=n && str[np-1] != 'C' && !vec_s[np]){
                        vec_s[np]==true;
                        q.push({np,z});
                    }
                }
            }
            if(x>0 && x<=n && str[x-1]=='W' && z<k){
                int np=x+1;
                if(np == n+1){
                    cec_r=true;
                    break;
                }
                if(np<=n && str[np-1]!='C' && !vec_s[np]){
                    vec_s[np]=true;
                    q.push({np,z+1});
                }
            }
        }
        if(cec_r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}