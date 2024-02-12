#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y, s;
        cin >> n >> x >> y >> s;
        vector<int>result;
        int a=x;
        result.push_back(a);
        int i=1;
        while(a<=s){
           int q=result[i-1]+y;
           int w=result[i-1]%y;
           if(q<=s){
            result.push_back(q);
            a+=q;
            i++;
           }
           else if(w<=s){
            a+=w;
            i++;
           }  
           else if(q>=s){
            a+=q;
           }
           else if(w>=s){
            a+=w;
           }
        }
        int sum=0;
        for(auto i:result){
            sum+=i;
        }
        if(sum==s){
            cout<<"YES"<<endl;
            for(auto i:result){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
