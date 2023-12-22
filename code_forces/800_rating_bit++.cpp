#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=1;i<=n;i++){
        string st;
        cin>>st;
        if(st=="X++" || st=="++X"){
            x++;
        }
        else if(st=="X--" || st == "--X"){
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}