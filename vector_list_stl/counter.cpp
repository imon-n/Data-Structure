
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    map<char, int> letters;

    getline(cin, s);
    sort(s.begin(), s.end());
    for (char c : s) {
        letters[c]++;
    }
    for (const auto& pair : letters) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}