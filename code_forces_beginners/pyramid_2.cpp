#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int j=1;
    int temp=n-1;
    while(i<=n){
        for(int m=1;m<=temp;m++){
            cout<<" ";
        }
        temp--;
        for(int k=1;k<=j;k++){
            cout<<"*";
        }
        cout<<endl;
        i++;
        j+=2;
    }
    return 0;
}