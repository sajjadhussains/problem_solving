#include<bits/stdc++.h>

using namespace std;

void digits_print(int n){
    //1.define base case
    if(n<1){
        return;
    }
    digits_print(n/10);
    if(n/10!=0){
        cout<<" ";
     }
    cout<<n%10;
     
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            cout<<n<<endl;
        }
        else{
            digits_print(n);
             cout<<endl;
        }
       
    }
    return 0;
}