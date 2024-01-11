#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, Q;
        cin >> P >> Q;

        int total_points=P+Q+1;
        if(total_points%4==1 || total_points%4==2){
            cout<<"Alice"<<endl;
        }
        else if(total_points%4==0 || total_points%4==3){
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}
