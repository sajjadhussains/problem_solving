#include<bits/stdc++.h>

using namespace std;
long long int count_divisors(long long int n){
    long long int count=0;
    while(n%2==0){
        count++;
        n/=2;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=-1;
    for(int i=0;i<n;i++){
        long long int divisors=count_divisors(arr[i]);
        if(max<divisors){
            max=divisors;
        }
    }
    cout<<max<<endl;

    return 0;
}