//https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout<<'#';
            }
            else{
                if(t%2==0){
                    if(j==m-1){
                        cout<<"#";
                        t++;
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if(j==0){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                    if(j==m-1){
                        t++;
                    }
                }

            }
        }
        cout<<endl;
    }
    return 0;
}