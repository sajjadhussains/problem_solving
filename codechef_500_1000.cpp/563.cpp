//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUGARCANE

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        int total=n*50;
        int a=(total/10)*2;
        int b=(total/10)*2;
        int c=(total/10)*3;
        
        cout<<total-(a+b+c)<<endl;
   }
   return 0;
}