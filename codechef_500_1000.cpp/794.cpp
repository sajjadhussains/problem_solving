#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"no"<<endl;
        }
        else{
             bool is_prime=true;
             for(int i=2;i<n;i++){
                 if(n%i==0){
                     is_prime=false;
                 }
             }
             if(is_prime){
                 cout<<"yes"<<endl;
             }
             else{
                 cout<<"no"<<endl;
             }
        }
        
    }
    return 0;
}
