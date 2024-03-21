#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        while(n>0){
            if(n%2==1) c++;
            n/=2;
        }
        long long sum=0;
        for(int i=0;i<c;i++){
            sum+=1*pow(2,i);
        }
        cout<<sum<<endl;
    }
    return 0;
}