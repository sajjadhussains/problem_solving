#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dot=3;
        int hash=1;
        bool hash_true=true;
        bool dot_true=false;
        int hash_count=1;
        bool hash_c_true=true;
        for(int i=1;i<=2*n;i++){
            for(int j=1;j<=2*n;j++){
                if(hash_true==true && hash_c_true==true){
                    cout<<"#";
                    hash++;
                    if(hash>2){
                        hash_true=false;
                        dot_true=true;
                        dot=1;
                    }
                }
                else if(dot_true==true ){
                    cout<<".";
                    dot++;
                    if(dot>2){
                        dot_true=false;
                        hash_true=true;
                        hash=1;
                    }
                }
            }
            cout<<endl;
            if(hash_count>2){
                    hash_count=1;
                    if(hash_c_true){
                        hash_true=false;
                    }
                    else{
                        hash_true=true;
                    }
                }
            hash_count++;
        }
        cout<<endl;
    }
    return 0;
}