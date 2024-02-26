#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;
    string int_part = "";
    string float_part = "";
    bool is_true = true;
    
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '.') {
            is_true = false;
        }
        if (is_true) {
            int_part += num[i];
        } else {
            float_part += num[i];
        }
    }

    if (is_true) {
        cout << "int " << int_part << endl;
    } else {
        bool double_check=false;
        for(int i=1;i<float_part.size();i++){
            if(float_part[i]!='0'){
                double_check=true;
                break;
            }
        }
        if(double_check == true){
            cout << "float "<<int_part<<" 0" << float_part << endl;
        }
        else{
            cout << "int " << int_part << endl;
        }
    }

    return 0;
}
