#include<bits/stdc++.h>

using namespace std;
void recursion_print(int n){
    if(n<1){
        return;
    }
    cout<<n;
    if(n-1>0){
        cout<<" ";
    }
    recursion_print(n-1);
}
int main()
{
    int n;
    cin>>n;
    recursion_print(n);
    return 0;
}