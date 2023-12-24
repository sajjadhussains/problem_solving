//problem_link:https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int size=str1.size();
    int ans=0;
    for(int i=0;i<size;i++){
        if(toupper(str1[i])==toupper(str2[i])){
            continue;
        }
        else if(toupper(str1[i])>toupper(str2[i])){
            ans=1;
            break;
        }
        else if(toupper(str1[i])<toupper(str2[i])){
            ans=-1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}