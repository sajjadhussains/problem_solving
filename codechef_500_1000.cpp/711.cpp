#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%10==0 || x%5==0){
            int rem=x%10;
            int ans1=x/10;
            int ans2=rem/5;
            cout<<ans1+ans2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
