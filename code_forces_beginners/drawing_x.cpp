#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && i!=(n/2)){
                cout<<"\\";
            }
            else if(i==j && i==(n/2)){
                cout<<"X";
                temp--;
            }
            else if(j==temp && j!=(n/2)){
                cout<<"/";
                temp--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0;

}