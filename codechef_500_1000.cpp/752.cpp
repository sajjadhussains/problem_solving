#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int extra_sticks=z/30;
        int total_sticks=extra_sticks+x;
        if(total_sticks%y==0){
            cout<<total_sticks/y<<endl;
        }
        else{
            cout<<total_sticks/y+1<<endl;
        }
    }
    return 0;
}
