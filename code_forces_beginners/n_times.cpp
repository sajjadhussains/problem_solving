#include<bits/stdc++.h>

using namespace std;
void n_times(int n,char c){
    for(int i=1;i<=n;i++){
        cout<<c;
        if(i<n){
            cout<<" ";
        }
    }
    cout<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
     int n;
     char ch;
     cin>>n>>ch;
     n_times(n,ch);
   }
    return 0;
}