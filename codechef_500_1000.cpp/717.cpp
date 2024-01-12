#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int chef,chef2;
        if(x%10!=0){
            chef=x/10+1;
        }
        else{
            chef=x/10;
        }
        if(y%10!=0){
            chef2=y/10+1;
        }
        else{
            chef2=y/10;
        }
        cout<<abs(chef2-chef)<<endl;
    }
    return 0;
}
