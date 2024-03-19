#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int j=1;
    while(i<=n){
        for(int k=1;k<=3;k++){
            cout<<j<<" ";
            j++;
        }
        cout<<"PUM"<<endl;
        i++;
        j++;
    }

    return 0;
}