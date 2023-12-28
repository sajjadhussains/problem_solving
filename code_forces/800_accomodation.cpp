//p_link:https://codeforces.com/problemset/problem/467/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int free_room=0;
    for(int i=1;i<=n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            free_room++;
        }
    }
    cout<<free_room<<endl;

    return 0;
}