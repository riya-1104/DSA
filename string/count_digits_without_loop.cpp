#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    string s = to_string(abs(x));  // handle negative numbers

    cout << s.length();
    return 0;
}
