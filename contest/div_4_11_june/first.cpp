#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;

        char ch=str1[0];
        char ch2 = str2[0];
        str1[0]=ch2;
        str2[0]=ch;
        cout<<str1<<" "<<str2<<endl;

    }
    return 0;
}