#include<bits/stdc++.h>

using namespace std;
void recursion_print(int n){
    if(n<1){
        return;
    }
    recursion_print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    recursion_print(n);
    return 0;
}