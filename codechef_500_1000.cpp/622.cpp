#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int final;
        if(a>=b && a>=c){
            final=a;
        }
        else if(b>=a && b>=c){
            final = b;
        }
        else if(c>=a && c>=b){
            final=c;
        }
        cout<<final<<endl;
    }
    return 0;
}
