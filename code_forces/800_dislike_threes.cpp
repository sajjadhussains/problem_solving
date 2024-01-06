//https://codeforces.com/problemset/problem/1560/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>a;
        int i=1;
        while(a.size()!=k){
            if(i<=2 || (i%3!=0 && i%10!=3)){
                a.push_back(i);
            }
            i++;
        }
        cout<<i-1<<endl;
    }

    return 0;
}