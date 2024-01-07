#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=100){
            x=x;
        }
        else if(x<=1000){
            x-=25;
        }
        else if(x<=5000){
            x-=100;
        }
        else{
            x-=500;
        }
        cout<<x<<endl;
    }
    return 0;
}
