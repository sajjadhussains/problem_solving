#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    int last_digit_a=a%10;
    int last_digit_b=b%10;
    cout<<last_digit_a+last_digit_b<<endl;

    return 0;
}