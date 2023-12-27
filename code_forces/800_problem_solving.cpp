// p_link:
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
    cin>>n;
    int freq1[91];
    int freq2[91];
    
    for(int i=65,j=1;i<=90 && j<=26;i++,j++){
        freq1[i]=j;
        freq2[i]=0;
    }
    string str;
    cin>>str;
    int sz=str.size();
    for(int i=0;i<sz;i++){
        freq2[int(str[i])]++;
    }

    int solve_count=0;
    for(int i=65;i<=90;i++){
        if(freq2[i]>=freq1[i]){
            solve_count++;
        }
    }
    cout<<solve_count<<endl;
    }
    return 0;
}