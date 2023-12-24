// problem_link:https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 5;
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    int curr_x = 0, curr_y = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1)
            {
                curr_x = i;
                curr_y = j;
            }
        }
    }
    int x_move, y_move;
    if (curr_x >= 2)
    {
        x_move = curr_x - 2;
    }
    else
    {
        x_move = 2 - curr_x;
    }
    if (curr_y >= 2)
    {
        y_move = curr_y - 2;
    }
    else
    {
        y_move = 2 - curr_y;
    }
    cout<<x_move+y_move<<endl;
    return 0;
}