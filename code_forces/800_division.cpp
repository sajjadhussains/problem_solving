//https://codeforces.com/problemset/problem/1669/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int ratting;
        cin>>ratting;
        if(ratting>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(ratting>=1600 && ratting<=1899){
            cout<<"Division 2"<<endl;
        }
        else if(ratting>=1400 && ratting<=1599){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }

    return 0;
}