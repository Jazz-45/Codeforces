#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int count = 0;

    // Try all values of a such that a^2 <= n
    for (int a = 0; a * a <= n; ++a) {
        int b = n - a * a;
        
        // Check if b is a non-negative integer
        if (b >= 0 && a + b * b == m) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}