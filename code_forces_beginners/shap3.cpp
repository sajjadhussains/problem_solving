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
    j-=2;
    int gap=0;
    for(int m=1;m<=n;m++){
        for(int g=0;g<gap;g++){
            cout<<" ";
        }
        for(int next=1;next<=j;next++){
            cout<<"*";
        }
        cout<<endl;
        gap++;
        j-=2;
    }

    return 0;
}