#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a=(100*x)/10;
        int b=(100*y)/20;
        if(a==b){
            cout<<"Any"<<endl;
        }
        else if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
