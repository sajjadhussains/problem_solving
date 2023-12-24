//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sort_arr[51];
    string str1;
    cin>>str1;
    int sort_size = 0;
    int str1_size=str1.size();
    for(int i=0;i<str1_size;i++){
        if(str1[i]!='+'){
            sort_arr[sort_size]=str1[i]-'0';
            sort_size++;
        }
    }
    for(int i=0;i<sort_size-1;i++){
        int min_idx = i;
        for (int j = i + 1; j < sort_size; j++) {
            if (sort_arr[j] < sort_arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(sort_arr[min_idx], sort_arr[i]);
    }
    for(int i=0;i<sort_size;i++){
        cout<<sort_arr[i];
        if(sort_size-1!=i){
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}