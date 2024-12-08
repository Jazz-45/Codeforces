#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;  // Read input string

    // Check if "0000000" or "1111111" exists in the string
    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos) {
        cout << "YES" << endl;  // If found, it's dangerous
    } else {
        cout << "NO" << endl;  // Otherwise, it's not dangerous
    }

    return 0;
}
