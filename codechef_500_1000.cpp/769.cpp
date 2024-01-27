#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int r,o,c;
        cin>>r>>o>>c;
        int remaining=20-o;
        int max_run=remaining*6*6;
        int more_run=r-c;
        if(max_run>more_run){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}
