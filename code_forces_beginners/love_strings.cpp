#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        int minimum=min(str1.size(),str2.size());
        int maximum=max(str1.size(),str2.size());
        string output="";
        for(int i=0;i<minimum;i++){
            output+=str1[i];
            output+=str2[i];
        }
        if(str1.size()==minimum){
            for(int i=minimum;i<maximum;i++){
                output+=str2[i];
            }
        }
        else{
            for(int i=minimum;i<maximum;i++){
                output+=str1[i];
            }
        }
        cout<<output<<endl;
    }
    return 0;
}