//https://codeforces.com/problemset/problem/427/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int hired_person=0;
    int untreated=0;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        if(j==-1 && hired_person==0){
            untreated++;
        }
        else if(j>0 && hired_person>=0){
            hired_person+=j;
        }
        else if(j==-1 && hired_person>=0){
            hired_person-=1;
        }
    }
    cout<<untreated<<endl;

    return 0;
}