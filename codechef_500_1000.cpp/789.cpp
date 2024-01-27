#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int arr1[3]={a1,a2,a3};
    int arr2[3]={b1,b2,b3};
   
    sort(arr1,arr1+3);
    sort(arr2,arr2+3);
    int alice=arr1[2]+arr1[1];
    int bob = arr2[2]+arr2[1];
    if(alice>bob){
        cout<<"Alice"<<endl;
    }
    else if(alice<bob){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    }
    return 0;
}
