#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int>unique_colors;
    unique_colors.insert(a);
    unique_colors.insert(b);
    unique_colors.insert(c);
    unique_colors.insert(d);

    cout<<(4-unique_colors.size())<<endl;
    return 0;
}
