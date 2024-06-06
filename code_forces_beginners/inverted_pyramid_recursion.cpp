#include<bits/stdc++.h>

using namespace std;

void inverted_pyramid(int n,int space,int star){
    if(n==0){
        return;
    }
    for(int i=0;i<space;i++){
        cout<<" ";
    }
    for(int i=0;i<star;i++){
        cout<<"*";
    }
    cout<<endl;
    inverted_pyramid(n-1,space+1,star-2);
}
int main()
{
    int n;
    cin>>n;
    int space = 0;
    int star=n;
    if(n%2==0){
        star = n+(n-1);
    }
    else{
        if(n==1){
            star=n;
        }
        else{
            star=n+2;
        }
    }
    inverted_pyramid(n,space,star);

    return 0;
}