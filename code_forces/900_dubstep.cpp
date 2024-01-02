// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, str_out;
    cin >> str;
    int i = 0;
    str_out = "";
    while (i < str.size())
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i =i+3;
        }
        else if (str[i] == 'W' && (str[i + 1] != 'U' || str[i + 2] != 'B'))
        {
            str_out+=str[i];
            i++;
            if(str[i]=='W'){
                str_out+=str[i+1];
                i++;
            }
            while (str[i] != 'W')
            {
                str_out += str[i];
                i++;
            }
            str_out+=" ";
        }
        else
        {
            while (str[i] != 'W' && i<str.size())
            {
                str_out += str[i];
                i++;
            }
            if( (str[i+1]=='U' && str[i+2] == 'B')){
                str_out+=" ";
            }
        }
    }
    cout << str_out << endl;

    return 0;
}