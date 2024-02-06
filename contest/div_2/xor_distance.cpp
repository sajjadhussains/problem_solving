#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long int a,b,c;
        cin>>a>>b>>c;
        unsigned long int r=c+1;
        unsigned long int arr[r];
        for(long long int i=0;i<r;i++){
            arr[i]=abs((a^i)-(b^i));
        }
        unsigned long int min=arr[0];
        for(unsigned long int i=1;i<r;i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        cout<<min<<endl;
    }

    return 0;
}