#include<bits/stdc++.h>
using namespace std;
void base_conversion(int num){ // 0
	if(num == 0){
		return;
	}
	base_conversion(num / 2);
	cout<<num%2;
	
}

int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--){
		int num;
		cin>>num;
		base_conversion(num);
		cout<<endl;
	}   
}