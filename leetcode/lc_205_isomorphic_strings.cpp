#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if(s.size() != t.size()) {
        cout << "false";
        return 0;
    }

    vector<int> v(256, 1000);

    for(int i = 0; i < s.size(); i++) {
        int idx = s[i];
        if(v[idx] == 1000) {
            v[idx] = s[i] - t[i];
        }
        else if(v[idx] != s[i] - t[i]) {
            cout << "false";
            return 0;
        }
    }

    for(int i = 0; i < 256; i++) {
        v[i] = 1000;
    }

    for(int i = 0; i < t.size(); i++) {
        int idx = t[i];
        if(v[idx] == 1000) {
            v[idx] = t[i] - s[i];
        }
        else if(v[idx] != t[i] - s[i]) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
