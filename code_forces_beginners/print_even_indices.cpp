#include<bits/stdc++.h>

using namespace std;

void even_indices(int n,int *arr){
    if(n<0){
        return;
    }
    if(n%2==0){
        cout<<arr[n]<<" ";
    }
    even_indices(n-1,arr);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n--;
    even_indices(n,arr);

    return 0;
}