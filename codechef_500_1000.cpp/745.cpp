#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    int medels=0;
	    if(x!=a && x!=b){
	        medels++;
	    }
	    if(y!=a && y!=b){
	        medels++;
	    }
	    cout<<medels<<endl;
	}
    return 0;
}
