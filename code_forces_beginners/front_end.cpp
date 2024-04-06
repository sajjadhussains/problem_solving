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
    int k = 0;
    int l = n - 1;
    if (n % 2 != 0)
    {
        while (k <= l)
        {
            cout << arr[k] << " ";
            if (k != l)
            {
                cout << arr[l];
            }
            k++;
            l--;
            if (k <= l)
                cout << " ";
        }
    }
    else{
        while(k<l){
            cout<<arr[k]<<" "<<arr[l];
            k++;
            l--;
            if(k!=l){
                cout<<" ";
            }
        }
    }

    return 0;
}