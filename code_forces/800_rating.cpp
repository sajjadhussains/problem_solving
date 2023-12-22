// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1 && b == 1 || a==1 && c==1 || b==1 && c==1){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}