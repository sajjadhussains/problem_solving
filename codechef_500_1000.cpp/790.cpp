#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int maximum=-1,score1=0,score2=0,a,b,winner;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        score1=score1+a;
        score2=score2+b;
        int lead;
        if(score1>score2){
            lead=score1-score2;
            if(maximum<lead){
                maximum=lead;
                winner=1;
            }
        }
        else{
            lead=score2-score1;
            if(maximum<lead){
                maximum=lead;
                winner=2;
            }
        }
    }
    cout<<winner<<" "<<maximum<<endl;
    return 0;
}
