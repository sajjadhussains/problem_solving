#include<bits/stdc++.h>
const int N=1e3+5;
char arr[N];
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    
    for(int i=0;i<n;i++){
        arr[i]=str[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    while(q--){
        string inr_str;
        cin>>inr_str;
        if(inr_str=="pop_back"){
             n--;
        }
        else if(inr_str=="front"){
            cout<<arr[0]<<endl;
        }
        else if(inr_str=="back"){
            cout<<arr[n-1]<<endl;
        }
        else if(inr_str=="sort"){
            int l,r;
            cin>>l>>r;
            l--,r--;
            for(int i=l;i<r;i++){
                for(int j=i+1;j<=r;j++){
                    if(arr[i]>arr[j]){
                        char temp=arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }
                }
            }
        }
        else if(inr_str=="reverse"){
            int l,r;
            cin>>l>>r;
            l--,r--;
            for(int i=l,j=r;i<=j;i++,j--){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        else if(inr_str=="print"){
            int pos;
            cin>>pos;
            pos--;
            cout<<arr[pos]<<endl;
        }
        else if(inr_str=="substr"){
            int l,r;
            cin>>l>>r;
            l--,r--;
            for(int i=l;i<=r;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
        else if(inr_str=="push_back"){
            char ch;
            cin>>ch;
            n++;
            arr[n-1]=ch;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return 0;
}