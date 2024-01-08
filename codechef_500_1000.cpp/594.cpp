#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        int total_points=a+(b*2);
        if(total_points>=x){
            cout<<"Qualify"<<endl;
        }
        else{
            cout<<"NotQualify"<<endl;
        }
    }
    return 0;
}
