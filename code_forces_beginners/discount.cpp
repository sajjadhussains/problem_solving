#include<bits/stdc++.h>

using namespace std;

int main()
{
    float percent,present_price;
    cin>>percent>>present_price;
    float past_price=(100*present_price)/(100-percent);
    cout<<fixed<<setprecision(2)<<past_price<<endl;

    return 0;
}