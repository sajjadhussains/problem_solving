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
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                ans+=-1;
            }
            else{
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
