#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int e=0,g=0,y=0,p=0,t=0;
    for(int i=0;i<str.size();i++){
        char value=str[i];
        if(value=='e' || value=='E')    e++;
        else if(value=='g' || value=='G')   g++;
        else if(value=='y' || value=='Y')   y++;
        else if(value == 'p' || value== 'P') p++;
        else if(value=='t' || value=='T') t++; 
    }
    int minimum=min({e,g,y,p,t});
    cout<<minimum<<endl;

    return 0;
}