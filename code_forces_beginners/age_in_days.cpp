#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int year=n/365;
    int rem=n%365;
    int month=rem/30;
    int days=rem%30;
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;

    return 0;
}