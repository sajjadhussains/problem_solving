#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int first_digit;
    while(a!=0){
        first_digit=a%10;
        a/=10;
    }
    if(first_digit%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }

    return 0;
}