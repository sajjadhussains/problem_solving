//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,c;
        cin>>b>>c;
        if(b<c){
            cout<<"BIKE"<<endl;
        }
        else if(b>c){
            cout<<"CAR"<<endl;
        }
        else{
            cout<<"SAME"<<endl;
        }
    }
    return 0;
}