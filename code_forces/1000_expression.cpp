//https://codeforces.com/problemset/problem/479/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=a+b*c;
    int ans2 = a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;
    int arr[5]={ans1,ans2,ans3,ans4,ans5};
    int max=0;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}