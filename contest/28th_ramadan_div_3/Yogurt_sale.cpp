#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int first_price=n*a;
        int no_of_second=n/2;
        int rem=n%2;
        int second_price=no_of_second*b+a*rem;
        if(first_price<second_price){
            cout<<first_price<<endl;
        }
        else{
            cout<<second_price<<endl;
        }
    }

    return 0;
}