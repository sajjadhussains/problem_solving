#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int odd=0,even=0;
    for(int i=1;i<=n;i++){
        int w;
        cin>>w;
        if(w%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY for Battle"<<endl;
    }
    else{
        cout<<"Not Ready"<<endl;
    }
    return 0;
}
