#include<bits/stdc++.h>

using namespace std;

int digit_sum(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;i++){
        int sum_of_digit=digit_sum(i);
        if(sum_of_digit>=a && sum_of_digit<=b){
            sum+=i;
        } 
    }
    cout<<sum<<endl;

    return 0;
}