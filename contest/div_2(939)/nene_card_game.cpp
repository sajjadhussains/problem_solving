#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int score=0;
        map<int,int>counts;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            counts[arr[i]]++;
            if(counts[arr[i]]==2){
                score++;
            }
        }
        cout<<score<<endl;
    }

    return 0;
}