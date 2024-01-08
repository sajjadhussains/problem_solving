//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=1 && x<=50){
            cout<<"LEFT"<<endl;
        }
        else{
            cout<<"RIGHT"<<endl;
        }
    }
    return 0;
}