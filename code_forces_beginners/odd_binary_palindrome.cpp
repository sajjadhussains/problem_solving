#include <iostream>
using namespace std;
int index=0;
int arr[100];
bool is_palindrome(int n){
    while(n!=0){
        arr[index]=n%2;
        n/=2;
        index++;
    }
    bool is_true=true;
    for(int i=0,j=index-1;i<index,j>=0;i++,j--){
        if(arr[i]!=arr[j]){
            is_true=false;
            break;
        }
    }
    return is_true;
}
int main() {
	int num;
	cin>>num; // 3
	if(num % 2 == 0){   // 2 4 6 8 10 ......
		cout<<"NO"<<endl;
		return 0;
	}
	if(is_palindrome(num)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
	
}