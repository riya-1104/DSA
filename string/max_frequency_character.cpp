#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for(int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    int mx = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] > mx) {
            mx = freq[i];
        }
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] == mx) {
            cout << char(i + 'a') << " " << mx << endl;
        }
    }

    return 0;
}
