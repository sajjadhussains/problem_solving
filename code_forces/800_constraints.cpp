#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int plus=0;
        int minus=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                minus+=-1;
            }
            else{
                plus+=1;
            }
        }
        if(minus>plus){
            cout<<minus-plus<<endl;
        }
        else if(minus<plus){
            cout<<plus-minus<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
