//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(a>=1000){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}