#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // sort(arr,arr+n,greater<int>());
    int max_indx, min_indx;
    bool max_found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max && max_found == false)
        {
            max_indx = i;
            max_found = true;
        }
        if (arr[i] == min)
        {
            min_indx = i;
        }
    }
    int max_moves = max_indx;
    int min_moves = (n - min_indx) - 1;
    if (max_indx < min_indx)
    {
        cout << max_moves + min_moves << endl;
    }
    else
    {
        cout << (max_moves + min_moves) - 1 << endl;
    }

    return 0;
}