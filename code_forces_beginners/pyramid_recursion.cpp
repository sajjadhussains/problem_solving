#include<bits/stdc++.h>

using namespace std;

void print_pyramid(int n,int space,int print_star){
    if(n==0){
        return;
    }
    for(int i=1;i<=space;i++){
        cout<<" ";
    }
    for(int i=1;i<=print_star;i++){
        cout<<"*";
    }
    cout<<endl;
    print_pyramid(n-1,space-1,print_star+2);
    
}
int main()
{
    int n;
    cin>>n;
    int space = n-1;
    int print_star=1;
    print_pyramid(n,space,print_star);

    return 0;
}