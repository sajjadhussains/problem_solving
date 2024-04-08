#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int count[123];
    for(int i=0;i<123;i++){
        count[i]=0;
    }
    for(int i=0;i<str.size();i++){
        count[int(str[i])]++;
    }
    for(int i=97;i<123;i++){
        if(count[i]>0){
            cout<<char(i)<<" : "<<count[i]<<endl;
        }
    }
    return 0;
}
