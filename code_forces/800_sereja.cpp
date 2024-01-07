// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s=0,d=0;
    int left=0;
    int right =n-1;
    int taken=n;
    int turn =0;
    while(taken!=0){
        if(turn%2==0){
            if(arr[left]>arr[right]){
                s=s+arr[left];
                left++;
            }
            else{
                s+=arr[right];
                right--;
            }
        }
        else{
            if(arr[right]>arr[left]){
                d+=arr[right];
                right--;
            }
            else{
                d+=arr[left];
                left++;
            }
        }
        taken--;
        turn++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}

