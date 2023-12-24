//p_link:https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_cap=0;
    int inside_tram=0;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        inside_tram=inside_tram-a;
        inside_tram=inside_tram+b;
        if(max_cap<inside_tram){
            max_cap=inside_tram;
        }
    }
    cout<<max_cap<<endl;
    return 0;
}