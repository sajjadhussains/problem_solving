#include<bits/stdc++.h>

using namespace std;

int main()
{
    float num;
    cin>>num;
    if(num>=0 && num<=25){
        cout<<"Interval [0,25]"<<endl;
    }
    else if(num>25 and num<=50){
        cout<<"Interval (25,50]"<<endl;
    }
    else if(num>50 and num<=75){
        cout<<"Interval (50,75]"<<endl;
    }
    else if(num>75 and num<=100){
        cout<<"Interval (75,100]"<<endl;
    }
    else{
        cout<<"Out of Intervals"<<endl;
    }
    return 0;
}