#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Reverse first half
    int n = s.length();
    reverse(s.begin(), s.begin() + n / 2);

    cout << s << endl;
    
    return 0;
}
