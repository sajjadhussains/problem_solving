//https://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        string str;
        cin>>str;
        if(str=="Tetrahedron") ans+=4;
        else if(str=="Cube") ans+=6;
        else if(str=="Octahedron") ans+=8;
        else if(str=="Dodecahedron") ans+=12;
        else if(str=="Icosahedron") ans+=20; 
    }
    cout<<ans<<endl;
    return 0;
}