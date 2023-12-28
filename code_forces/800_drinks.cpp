//https://codeforces.com/problemset/problem/200/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int p;
        cin>>p;
        sum+=p;
    }
    cout<< static_cast<double>(sum)/n<<endl;

    return 0;
}