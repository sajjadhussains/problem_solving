#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int N=65;
        int K=k*n;
        string str="";
        for(int i=0;i<k;i++){
            char c=N;
            str+=tolower(c);
            N++;
        }
        int m=0;
        int test=k;
        while(test<K){
            if(m==k){
                m=0;
            }
            str+=str[m];
            m++;
            test++;
        }
       
        cout<<str<<endl;
    }
    return 0;
}