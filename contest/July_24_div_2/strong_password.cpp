#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int i=0;
        bool isFound=false;
        while(i!=str.length()){
            if(isFound==true){
                cout<<str[i];
                i++;
            }
            else if(str[i]==str[i+1]){
                cout<<str[i];
                char firstChar;
                if(int(str[i])==122){
                    firstChar=char(int(str[i])-1);
                }
                else{
                    firstChar=char(int(str[i])+1);
                }
                cout<<firstChar;
                cout<<str[i+1];
                isFound=true;
                i+=2;
            }
            else{
                cout<<str[i];
                i++;
            }
        }
        if(isFound==false){
            char firstChar;
            if(str[str.length()-1]==122){
                firstChar=char(int(str[str.length()-1])-1);
            }
            else{
                firstChar = char(int(str[str.length()-1])+1);
            }
            cout<<firstChar;
        }
        cout<<endl;
    }

    return 0;

}