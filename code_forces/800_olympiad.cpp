#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int programming=0,maths=0,pe=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            programming++;
        }
        else if(arr[i]==2){
            maths++;
        }
        else{
            pe++;
        }
    }

    int minimum=min({programming,maths,pe});


    return 0;
}
//unsolved