#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int first=0;
    int second=0;
    int length=max(str1.size(),str2.size());
    for(int i=0;i<length;i++){
        if(str1[i]==str2[i]){
            first++;
            second++;
        }
        else if(str1[i]-'0'>str2[i]-'0'){
            first++;
            break;
        }
        else{
            second++;
            break;
        }
    }
    if(first==second){
        cout<<str1<<endl;
    }
    else if(first>second){
        cout<<str2<<endl;
    }
    else{
        cout<<str1<<endl;
    }
    return 0;
}