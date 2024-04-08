#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1;
    cin>>str1;
    int sum=0;
    for(int i=0;i<str1.size();i++){
        sum+=str1[i]-'0';
    }
    cout<<sum<<endl;
    return 0;
}