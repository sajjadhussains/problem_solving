#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int t_slices=n*x;
        if(t_slices%4!=0){
            cout<<(t_slices/4)+1<<endl;
        }
        else{
            cout<<t_slices/4<<endl;
        }
    }
    return 0;
}
