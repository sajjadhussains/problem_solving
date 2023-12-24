//problem_link:

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'){
            str[i]='.';    
        }
    }
    for(int i=0;i<str.size();i++){
        if(str[i]!='.'){
            cout<<"."<<str[i];
        }
    }
    cout<<endl;

    return 0;
}