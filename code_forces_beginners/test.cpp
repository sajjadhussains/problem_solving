#include<bits/stdc++.h>

using namespace std;

int main()
{
	 string sum;
    string finalSum;
   
    cin >> sum;
    char array[sum.length()+1] ;
    for(int i=0; i<sum.length();i++){
        if(sum[i] != '+'){
            array[i] = sum[i];
            cout << array[i];
            
        }

    }
//   for(int i=0;i<sum.length();i++){
//    cout<<array[i]<<endl;
//   }
  return 0;
}