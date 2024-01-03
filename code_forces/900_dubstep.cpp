#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, str_out;
    cin >> str;

    int i = 0;
    while (i < str.size()) {
        if (i + 2 < str.size() && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
            i += 3;  // Skip "WUB"
        } else {
            while (i < str.size() && !(i + 2 < str.size() && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')) {
                str_out += str[i];
                i++;
            }
            str_out += ' ';  // Add space after each word
        }
    }

    // Remove trailing space
    if (!str_out.empty() && str_out.back() == ' ') {
        str_out.pop_back();
    }

    cout << str_out << endl;

    return 0;
}
