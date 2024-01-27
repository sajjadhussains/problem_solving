#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            if(str=="START38"){
                ans1++;
            }
            else{
                ans2++;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    
    return 0;
}
