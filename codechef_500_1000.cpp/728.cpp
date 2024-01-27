#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int first=(500-a*2)+(1000-4*(a+b));
        int second=(500-(a+b)*2)+(1000-(b*4));
        if(first>second){
            cout<<first<<endl;
        }
        else{
            cout<<second<<endl;
        }
    }
    return 0;
}
