#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int maximum=max({a,b,c});
        int second_max;
        if(maximum==a){
           if(b>c) second_max=b;
           else second_max=c;
        }
        else if(maximum==b){
            if(a>c) second_max=a;
            else second_max=c;
        }
        else if(maximum==c){
            if(a>b) second_max=a;
            else second_max=b;
        }
        cout<<second_max<<endl;
    }
    return 0;
}
