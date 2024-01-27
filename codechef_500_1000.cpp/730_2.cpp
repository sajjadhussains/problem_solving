#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int total=n*3;
        int correct=x*3;
        int incorrect=(n-x)*(-1);
        int got=correct+incorrect;
        if(got>=p){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
