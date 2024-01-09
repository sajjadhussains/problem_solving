#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int arr[4];
        arr[0]=a+c;
        arr[1]=a+d;
        arr[2]=b+c;
        arr[3]=b+d;
        int max=arr[0];
        for(int i=1;i<4;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
