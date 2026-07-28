/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CALPOWER                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 28, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CALPOWER                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        long long count = 0;

        for (int i = 0; i < s.size(); i++) {
            count += 1LL * (i + 1) * (s[i] - 'a' + 1);
        }

        cout << count << endl;
    }

    return 0;
}