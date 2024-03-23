#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long id;
    cin>>id;
    long long row=id/4;
    if(row%2==0){
        cout<<row<<" "<<id%4<<endl;
    }
    else{
        cout<<row<<" ";
        long long rem=id%4;
        long long col;
        if(rem==0) col=3;
        else if(rem==1) col=2;
        else if(rem==2) col=1;
        else col=0;
        cout<<col<<endl;
    }
    return 0;
}