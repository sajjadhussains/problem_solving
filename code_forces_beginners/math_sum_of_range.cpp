#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long p=max(a,b);
    long long q=min(a,b);
    long long total_sum=p*(p+1)/2;
    long long one_to_min_sum=(q-1)*(q)/2;
    long long sum=total_sum-one_to_min_sum;
    long long sum_even;
    long long sum_odd;
    long long result=0;
    for(long long  i=q;i<=p;i+=2){
        result+=i;
    }
    if(q%2==0){
        sum_even=result;
        sum_odd=sum-sum_even;
    }
    else{
        sum_odd=result;
        sum_even=sum-sum_odd;
    }
    // cout<<one_to_min_sum<<endl;
    cout<<sum<<endl;
    cout<<sum_even<<endl;
    cout<<sum_odd<<endl;
    return 0;
}