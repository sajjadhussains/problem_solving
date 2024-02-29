#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int num1=n/10;
   int num2=n%10;
   if(n%10==0){
    cout<<"YES"<<endl;
   }
   else if(num1%num2==0 || num2%num1==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   } 
   return 0;
}