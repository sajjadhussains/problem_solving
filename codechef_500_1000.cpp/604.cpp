#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,count=0;
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            int age;
            cin>>age;
            if(age>=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
