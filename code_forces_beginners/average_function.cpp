#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum=0;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double average=sum/n;
    cout<<fixed<<setprecision(6)<<average<<endl;
    return 0;
}