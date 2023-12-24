#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int total_cost=0;
    for(int i=1;i<=w;i++){
        total_cost+=(i*k);
    }
    int borrow_money;
    if(total_cost<=n){
        borrow_money=0;
    }
    else{
        borrow_money=total_cost-n;
    }
    cout<<borrow_money<<endl;
    return 0;
}