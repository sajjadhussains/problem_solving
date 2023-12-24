//problem_link:https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a_count=0,d_count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            a_count++;
        }
        else if(str[i]=='D'){
            d_count++;
        }
    }
    if(a_count>d_count){
        cout<<"Anton"<<endl;
    }
    else if(a_count<d_count){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}