#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch_arr[27];
    for(int i=1,j=97;i<27 && j<=122;i++,j++){
        ch_arr[i]=(char)j;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string output;
        if(n<=28){
            int a=n-2;
            int b=1;
            int c=1;
            output+=ch_arr[b];
            output+=ch_arr[c];
            output+=ch_arr[a];
        }
        else if(n/26==1){
            int rest_ch=n%26;
            output+=ch_arr[1];
            output+=ch_arr[rest_ch-1];
            output+=ch_arr[26];
        }
        else if(n/26==2){
            int rest_ch=n%26;
            if(rest_ch%26==0){
                int a=1;
                int b=26-1;
                output+=ch_arr[a];
                output+=ch_arr[b];
                output+=ch_arr[26];
            }
            else{
                output+=ch_arr[rest_ch];
                output+=ch_arr[26];
                output+=ch_arr[26];
            }
        }
        else{
            output+=ch_arr[26];
            output+=ch_arr[26];
            output+=ch_arr[26];
        }
        cout<<output<<endl;
    }

    return 0;
}